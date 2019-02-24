module.exports = grammar({
  name: 'syncat_stylesheet',

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat($.rule),

    rule: $ => seq($._selectors, '{', repeat($.style), '}'),

    _selectors: $ => choice(seq($._selectors, ",", $.selector), $.selector),

    selector: $ => choice(
      $._terminal_selector,
      seq($._selector_scope, $._terminal_selector),
    ),

    _terminal_selector: $ => choice($.node_kind, $.token),

    _selector_scope: $ => choice(
      seq($._selector_scope, $._selector_node),
      $._selector_node,
    ),

    _selector_node: $ => choice(
      $.direct_child,
      $.node_kind,
    ),

    direct_child: $ => seq($.node_kind, '>'),
    node_kind: $ => /[A-Za-z0-9-_]+/,
    token: $ => /"(?:[^"\\]|\\.)+"/,

    style: $ => seq($.style_name, ':', $.style_value, ';'),

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

    style_value: $ => choice($._boolean_value, $._color_literal, $._color_index, $._rgb_color),
    _boolean_value: $ => choice('true', 'false'),
    _color_literal: $ => choice('red', 'blue', 'green', 'purple', 'yellow', 'black', 'white', 'cyan'),
    _color_index: $ => /#[a-fA-F0-9]{6}/,
    _rgb_color: $ => /2[0-4][0-9]|25[0-5]|1?[0-9]{1,2}/,

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
