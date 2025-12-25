#include<stdio.h>
int func(); // function prototype
int fun1();
extern int v2; // declaration of external variable

int func()
{
    printf("\n%d",v2);
    fun1(); // function call // transfer control to fun1()
}


int fun1()  // this is for auto storage class
{
    auto int v1=10; // auto int = int 
    printf("\n%d",v1);
}


