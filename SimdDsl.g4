grammar SimdDsl;

program
    : structDeclaration vectorWidthDeclaration? statement* EOF
    ;

statement
    : declaration
    | assignment
    | compoundAssignment
    | updateStatement
    | callStatement
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

// Optional target register width. The default is 256 bits (AVX2).
vectorWidthDeclaration
    : 'vector_width' INT ';'
    ;

// vector ttl;
// vector sum = a + b;
declaration
    : 'vector' IDENTIFIER ('=' expression)? ';'
    ;

// packet.ttl = packet.ttl - 1;
assignment
    : lvalue '=' expression ';'
    ;

// packet.ttl -= 1;
compoundAssignment
    : lvalue op=('+=' | '-=') expression ';'
    ;

// packet.ttl--;
updateStatement
    : lvalue '--' ';'
    ;

callStatement
    : call ';'
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
    : '(' expression ')'                        # ParenExpr
    | lvalue op='--'                            # DecrementExpr
    | expression op=('+' | '-') expression      # AddSubExpr
    | call                                      # CallExpr
    | lvalue                                    # LvalueExpr
    | INT                                       # IntExpr
    ;

lvalue
    : IDENTIFIER '.' IDENTIFIER
    ;

IDENTIFIER   : [a-zA-Z_][a-zA-Z_0-9]* ;
INT          : [0-9]+ ;
WS           : [ \t\r\n]+ -> skip ;
LINE_COMMENT : '//' ~[\r\n]* -> skip ;
