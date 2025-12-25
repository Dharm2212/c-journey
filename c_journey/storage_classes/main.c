#include<stdio.h>
#include<stdlib.h>

int function(); // function prototype

//extern int v; 

int main()
{
    int v1;
    v1 = function();  // first call
    v1 = function(); // second call
    v1 = function(); // third call

   // v = v + 1;       // this is able to chane only global variable of extern file 
                     // not able to access static variable of extern file
    //v1= v;

    printf("%d",v1);
    return 0;
}
