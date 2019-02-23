module.exports = grammar({
  name: 'syncat_stylesheet',

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat($.rule),

    rule: $ => seq(seq(repeat($.node_kind), optional($.token)), '{', repeat($.style), '}'),

    style: $ => seq($.style_name, ':', $.style_value, ';'),

    node_kind: $ => /[A-Za-z0-9-_]+/,

    token: $ => /"(?:[^"\\]|\\.)+"/,

    style_name: $ => choice(
      'colour', 'color',
      'background-colour', 'background-color',
      'italic',
      'bold',
      'underline',
      'strikethrough',
      'hidden',
      'blink',
      'dim',
      'reverse',
    ),

    style_value: $ => choice(
      'true', 'false', 
      'red', 'blue', 'green', 'purple', 'yellow', 'black', 'white', 'cyan',
      /#[a-fA-F0-9]{6}/,
      /2[0-4][0-9]|25[0-5]|1?[0-9]{1,2}/,
    ),

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
