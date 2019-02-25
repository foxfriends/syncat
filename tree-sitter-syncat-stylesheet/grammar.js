module.exports = grammar({
  name: 'syncat_stylesheet',

  extras: $ => [/\s/, $.comment],

  rules: {
    stylesheet: $ => repeat($.rule),

    rule: $ => seq($._selectors, $._style_block),

    _selectors: $ => choice(
      seq($.selector, ',', $._selectors), 
      seq($.selector, optional(',')),
    ),

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
      $.branch_check,
      $.direct_child,
      $.node_kind,
    ),

    branch_check: $ => seq('[', $.selector, ']'),
    direct_child: $ => seq($.node_kind, '>'),
    node_kind: $ => $._unquoted_string,
    token: $ => $._quoted_string,

    _style_block: $ => choice(
      $.important_styles,
      $.styles,
    ),

    styles: $ => seq('{', $._style_list, '}'),
    important_styles: $ => seq('{|', $._style_list, '|}'),

    _style_list: $ => choice(
      seq($.style, optional(';')),
      seq($.style, ';', $._style_list),
    ),

    style: $ => choice(
      seq(alias($._color_style, $.style_name), ':', alias($._color_value, $.style_value)),
      seq(alias($._boolean_style, $.style_name), ':', alias($._boolean_value, $.style_value)),
      seq(alias($._string_style, $.style_name), ':', alias($._string_value, $.style_value)),
    ),

    _color_style: $ => choice(
      'colour', 'color',
      'background-colour', 'background-color',
    ),

    _color_value: $ => choice($._color_literal, $._color_index, $._rgb_color),
    _color_literal: $ => choice('red', 'blue', 'green', 'purple', 'yellow', 'black', 'white', 'cyan'),
    _color_index: $ => /#[a-fA-F0-9]{6}/,
    _rgb_color: $ => /2[0-4][0-9]|25[0-5]|1?[0-9]{1,2}/,

    _boolean_style: $ => choice(
      'italic',
      'bold',
      'underline',
      'strikethrough',
      'hidden',
      'blink',
      'dim',
      'reverse',
    ),

    _boolean_value: $ => choice('true', 'false'),

    _string_style: $ => 'language',

    _string_value: $ => choice($._unquoted_string, $._quoted_string),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    _unquoted_string: $ => /[A-Za-z0-9-_]+/,
    _quoted_string: $ => /"(?:[^"\\]|\\.)+"/,
  },
});
