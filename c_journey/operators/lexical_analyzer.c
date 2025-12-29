// lexical analyzer is a program that converts a sequence of characters into a sequence of tokens.
#include<stdio.h>
int main()
{
    int a=2,b=3;
    printf("%d\n",a+++b); // Here, a++ is treated as (a++) + b lexical analysis
                        // here first a is used in expression and then incremented bcz of post-increment

    printf("%d", a + ++b);// this will be treated as a + (++b) // output will be 7
                         // here first b is incremented and then used in expression bcz of pre-increment
    return 0;
}