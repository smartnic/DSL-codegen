grammar SimdDsl;

program
    : statement* EOF
    ;

statement
    : structDeclaration
    | vectorWidthDeclaration
    | declaration
    | assignment
    | compoundAssignment
    | updateStatement
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
// vector sum = a + b;
declaration
    : 'vector' IDENTIFIER ('=' expression)? ';'
    ;

// sum = a + b - c;
assignment
    : lvalue '=' expression ';'
    ;

// ttl -= 1;   sum += x;
compoundAssignment
    : lvalue op=('+=' | '-=') expression ';'
    ;

// ttl--;
updateStatement
    : lvalue '--' ';'
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
    | IDENTIFIER '--'
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

// Alternatives listed first bind tighter. '+' and '-' are left-associative.
expression
    : '(' expression ')'                        # ParenExpr
    | lvalue op='--'                            # DecrementExpr
    | expression op=('+' | '-') expression      # AddSubExpr
    | call                                      # CallExpr
    | lvalue                                    # LvalueExpr
    | INT                                       # IntExpr
    ;

lvalue
    : IDENTIFIER ('.' IDENTIFIER | '[' expression ']')*
    ;

IDENTIFIER   : [a-zA-Z_][a-zA-Z_0-9]* ;
INT          : [0-9]+ ;
WS           : [ \t\r\n]+ -> skip ;
LINE_COMMENT : '//' ~[\r\n]* -> skip ;