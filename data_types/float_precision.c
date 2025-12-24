#include<stdio.h>
int main()

{
    float v1=3.7874392665;  
    double v2=3.14225648562315618592;
    long double v3=3.14225648562315618592812345678901234567890;

    printf("size of float is %d \n ", sizeof(float));
    printf("size of double is  %d \n ", sizeof(double));
    printf("size of long double is %d \n " ,sizeof(long double));

    printf("%.10f",v1);     // %f for float data type        // .10 for 10 decimal places
                            // by default float prints 7 digit correctly 

    printf("\n%.20lf",v2);  // %lf for double data type      // .20 for 20 decimal places
                             // by default double prints 15 digit correctly

    printf("\n%.30Lf",v3);  // %Lf for long double data type // .30 for 30 decimal places
                             // by default long double prints 18 digit correctly


    int var=4/9;
    printf("\n%d",var);

    float var1=4/9;
    printf("\n%f",var1);

    float var2=4.0/9.0;
    printf("\n%f",var2);

}
