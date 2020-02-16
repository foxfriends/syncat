module.exports = grammar({
    name: 'syncat_stylesheet',

    extras: $ => [/\s/, $.comment],
    word: $ => $.name,

    rules: {
        stylesheet: $ => repeat($.item),
        item: $ => choice($.rule, $.declaration, $.import),

        declaration: $ => seq($.variable, ':', $.value, ';'),
        variable: $ => /\$[a-zA_Z0-9-_]+/,

        import: $ => seq('import', $.module, ';'),
        module: $ => choice($.name, $.string),

        rule: $ => seq($.selectors, $.styles),

        selectors: $ => $._selectors,
        _selectors: $ => choice(
            seq($.selector, ',', $._selectors),
            seq($.selector, optional(',')),
        ),

        selector: $ => seq($.scope, optional($.selector_modifier)),
        selector_modifier: $ => repeat1(choice($.no_inherit, $.exact)),
        no_inherit: $ => '!',
        exact: $ => '.',

        scope: $ => repeat1(seq($.node, optional($.node_modifier))),

        node_modifier: $ => choice(
            $.direct,
            $.sibling,
            $.direct_sibling,
        ),
        direct: $ => '>',
        direct_sibling: $ => '+',
        sibling: $ => '~',

        node: $ => choice(
            $.group,
            $.kind,
            $.token,
            $.any,
        ),
        group: $ => seq('(', optional($.group_name), $.scope, ')'),
        group_name: $ => seq('<', $.name, '>'),
        kind: $ => $.name,
        token: $ => choice(
            $.string,
            $.regex,
        ),
        any: $ => "*",

        styles: $ => seq('{', repeat($.style), '}'),
        style: $ => seq($.name, ':', $.value, optional($.style_modifier), ';'),
        style_modifier: $ => choice(
            $.important,
        ),
        important: $ => '!',

        value: $ => choice(
            $.color,
            $.boolean,
            $.string,
            $.variable,
            $.name,
            $.number,
            $.capture,
        ),
        capture: $ => seq($.variable, '.', $.number),

        color: $ => choice($.named_color, $.hex_color),
        named_color: $ => choice(
            'red', 'blue', 'green', 'purple', 'yellow', 'black', 'white', 'cyan',
            'brred', 'brblue', 'brgreen', 'brpurple', 'bryellow', 'brblack', 'brwhite', 'brcyan',
        ),
        hex_color: $ => /#[a-fA-F0-9]{6}/,
        boolean: $ => choice('true', 'false'),
        number: $ => /[0-9]+/,
        regex: $ => /\/([^\/\\]|\\.)+\/i?/,
        string: $ => /"(?:[^"\\]|\\.)+"/,
        name: $ => /[A-Za-z0-9-_]*[A-Za-z-_][A-Za-z0-9-_]*/,
        comment: $ => token(seq('//', /.*/)),
    },
});
