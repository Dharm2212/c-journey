// +,-,*,/,% operators for arithmetic operations
#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter first integers: ");
    scanf("%f",&a); 
    printf("Enter second integers: ");
    scanf("%f",&b);  
    printf("Addition: %f + %f = %f\n",a,b,a+b);
    printf("Subtraction: %f - %f = %f\n",a,b,a-b);
    printf("Multiplication: %f * %f = %f\n",a,b,a*b);
    printf("Division: %f / %f = %f\n",a,b,a/b);
    //printf("Modulus: %f %% %f = %f\n",a,b,a%b); // Modulus operator is not applicable for float
    return 0;
}