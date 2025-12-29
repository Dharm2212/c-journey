// ==, !=, <=, >=, <, > relational operators in C
//this will return 1 if condition is true else 0 (true or false)
// && , || , ! logical operators in C // this work as true false conditions
// & , | , ~ , ^ , << , >> bitwise operators in C //this work per bit
// assignment operators =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=
//condition ? expression1 : expression2  // ternary operator 3 operators

// first opernad << second operand // second operand defines number of positions to shift

#include <stdio.h>

int main()
{
    int var=4,marks;
    var<<1; // var = 8
    var<<2; // var = 16

    //var<<n // var = var * (2^n)  left shift

    var>>1; // var = 2
    var>>2; // var = 1
    //var>>n // var = var / (2^n) right shift
    

    char a=7;
    a^=5;
    printf("%d",printf("%d",a+=3)); // this will print 5 and 1 // 1 is the return value of inner printf
    // 1 is no of characters printed by inner printf

    char result;
    printf("\nenter marks");
    scanf("%d",&marks);
    result =(marks>33)?'p':'f';
    printf("%c",result); // this will print pass if marks>33 else fail
    

    return 0;
}
