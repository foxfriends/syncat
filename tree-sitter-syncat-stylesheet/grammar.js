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

    _terminal_selector: $ => choice(
      $._simple_terminal,
      $._complex_terminal,
    ),

    _selector_scope: $ => choice(
      $._selector_node,
      seq($._selector_scope, $._selector_node),
    ),

    _selector_node: $ => choice(
      $._complex_node,
      $._simple_node,
    ),

    _simple_terminal: $ => choice(
      $.node_kind,
      $.token,
      $.token_pattern,
    ),

    _complex_terminal: $ => choice(
      alias($.direct_terminal, $.direct_child),
      $.no_children,
    ),

    _simple_node: $ => choice(
      $.branch_check,
      $.node_kind,
    ),

    _complex_node: $ => $.direct_child,

    direct_child: $ => seq('>', $._simple_node),
    direct_terminal: $ => seq('>', choice($.no_children, $._simple_terminal)),

    no_children: $ => seq($.node_kind, "."),

    branch_check: $ => seq('[', $.selector, ']'),
    node_kind: $ => $._unquoted_string,
    token: $ => $._quoted_string,
    token_pattern: $ => $.regex,

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
    _string_style: $ => choice('language', 'content'),
    _string_value: $ => choice($._unquoted_string, $._quoted_string),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    regex: $ => /\/([^\/\\]|\\.)+\/i?/,
    _unquoted_string: $ => /[A-Za-z0-9-_]+/,
    _quoted_string: $ => /"(?:[^"\\]|\\.)+"/,
  },
});
