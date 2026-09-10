grammar SimdDsl;

program
    : statement* EOF
    ;

statement
    : structDeclaration
    | vectorWidthDeclaration
    | declaration
    | assignment
    | callStatement
    | forStatement
    ;

structDeclaration
    : 'struct' IDENTIFIER '{' fieldDeclaration* '}' ';'?
    ;

fieldDeclaration
    : vectorType IDENTIFIER ';'
    | typeName '*'? IDENTIFIER ';'
    ;

vectorType
    : 'vector' typeName
    ;

typeName
    : IDENTIFIER
    ;

// vector_width 256;
vectorWidthDeclaration
    : 'vector_width' INT ';'
    ;

// vector ttl;
declaration
    : 'vector' IDENTIFIER ('=' call)? ';'
    ;

assignment
    : 'vector' IDENTIFIER '=' call ';'
    | lvalue '=' call ';'
    ;

callStatement
    : call ';'
    ;

forStatement
    : 'for' '(' loopInitializer ';' condition ';' loopUpdate ')' block
    ;

loopInitializer
    : IDENTIFIER '=' expression
    ;

condition
    : IDENTIFIER ('<' | '<=' | '>' | '>=') expression
    ;

loopUpdate
    : IDENTIFIER '++'
    | IDENTIFIER '=' expression
    ;

block
    : '{' statement* '}'
    ;

call
    : IDENTIFIER '(' argList? ')'
    ;

argList
    : arg (',' arg)*
    ;

arg
    : expression
    ;

expression
    : lvalue
    | INT
    ;

lvalue
    : IDENTIFIER ('.' IDENTIFIER | '[' expression ']')*
    ;

IDENTIFIER   : [a-zA-Z_][a-zA-Z_0-9]* ;
INT          : [0-9]+ ;
WS           : [ \t\r\n]+ -> skip ;
LINE_COMMENT : '//' ~[\r\n]* -> skip ;
