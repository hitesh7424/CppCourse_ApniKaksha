// Operators

/*

Operators are symbols that tell the compiler to perform some specific operations.

+ - * / % ++ -- > < == >= <= !=

*/

/*

1) Arithmetic Operators:
    Binary operators: + - * / %(modulo)
    Unary operators: ++(incrementer) --(decrementer)

*/

/*

2) Relational Operators:
    Defines a relation between 2 operands
    Returns a boolean value

    == Gives true value if both operands have equal value
    != Gives true if both operands are not equal
    >  Gives true if left operand is more than the right operand
    <  Gives true if left operand is less than the right operand
    >= Gives true if left operand is more than or equal to right operand
    <= Gives true if left operand is less than or equal to right operand

*/

/*

3) Logical Operators:
    Used to connect multiple conditions/expressions
    together or to reverse logical value

    && AND gives true if both operands are true, else false
    || OR gives us true if at least one of the operands are true
    !  NOT gives the opposite logical value of the operand. True becomes false and false becomes true

    (T && F) -> F
    (5 && 0) -> F
    (5 && 1) -> T
    (T || F) -> T
    (5 || 0) -> T
    !(F)

*/

/*

4) Bitwise Operator:
    Operates on bits and performe bit-by-bit operations

    &   AND operator            0101 & 0110 = 0100
    |   OR operator             0101 | 0110 = 0111
    ^   XOR operator            0101 ^ 0110 = 0011
    ~   Ones comlement          ~ 0101 = 1010
    <<  Left shift operator     4<<1 (0100)=1000
    >>  Right shift operator    4>>1 (0100)=0010

    a<<n = a*2^n
    a>>n = a/2^n

*/