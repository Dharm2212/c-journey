#include<stdio.h>
int function(); // function prototype
int func(); 

int v2=17; // global variable

int main()
{
    int v1=10;
    int v2=3;
    printf("%d",v1); 
    printf("\n%d",v2);  // prints local v2
    function();    // function call // transfer control to fun()
    func();
    return 0;
}

int function()
{
    // printf("%d",v1);    // Error: v1 is not declared in this scope //v1 is local to main function only
    printf("\n%d",v2);    // prints global v2
    
}