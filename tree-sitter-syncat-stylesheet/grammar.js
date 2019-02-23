module.exports = grammar({
  name: 'syncat_stylesheet',

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat($.rule),

    rule: $ => seq(repeat($.node_kind), '{', repeat($.style), '}'),

    style: $ => seq($.style_name, ':', $.style_value, ';'),

    node_kind: $ => choice(
      /[^{}\s]+/,
      /'(?:[^'\\]|\\.)+'/,
      /"(?:[^"\\]|\\.)+"/,
    ),

    style_name: $ => /[a-zA-Z-_][a-zA-Z0-9-_]*/,
    style_value: $ => /[^;\s]+/,

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  },
});
