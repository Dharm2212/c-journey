//data type and range

#include <stdio.h>
#include <limits.h>

int main()
{ 
    //int data type
    int v1 = INT_MIN;  //minimum value of signed integer from limits.h
    int v2 = INT_MAX;  //maximum value of signed integer from limits.h
    printf("range of signed integer is from %d  to %d",v1,v2); // %d for signed
     
    unsigned int v3= UINT_MAX; //maximum value of unsigned integer from limits.h
    printf ("\nrange of unsigned integer is from 0 to %u",v3); //%u for unsigned

    //short int data type
    short int v4= SHRT_MIN; //minimum value of signed short integer from limits.h
    short int v5= SHRT_MAX; //maximum value of signed short integer from limits.h
    printf("\nrange of short integer is from %d to %d ",v4,v5);

    //unsigned short int data type
    unsigned short int v6=USHRT_MAX; //maximum value of unsigned short integer from limits.h
    printf("\nrange of unsigned short integer is from 0 to %u",v6);
    
    //long int data type
    long int v7= LONG_MIN; //minimum value of signed long integer from limits.h
    long int v8= LONG_MAX; //maximum value of signed long integer from limits.h
    printf("\nrange of long integer is from %ld to %ld",v7,v8); //%ld for long signed

    //unsigned long int data type
    unsigned long int v9= ULONG_MAX; //maximum value of unsigned long integer from limits.h
    printf("\nrange of unsigned long integer is from 0 to %lu",v9); //%lu for long unsigned

    //long long int data type //%lld for long long signed
    //unsigned long long int data type //%llu for long long unsigned
        return 0;
}  