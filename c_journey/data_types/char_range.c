//lac9 charater data type and range
#include <stdio.h>

int main()
{
        char v1='a';
        printf("%c",v1); // %c for character data type

        //  size and range of char data type
        //  size=1 byte=8 bits
        //  range of signed char data type = -128 to 127
        //  range of unsigned char data type = 0 to 255
        //  ascii values this is method to represent character in integer form
        //  for example 'a' = 97, 'A' = 65, '0' = 48

        char v2=-127;
        char v3= 129;
        printf("\n%c=%c",v2,v3); // -127 = 129 = 129 - 256 = -127
                                 // -126 = 130
                                
        return 0;

        // every negative value is stored by subtracting 256 from it to get equivalent positive value
        // no significance of negative value in char data type
        // in traditional ascii values range is from 0 to 127 only (7 bits)
        // in extended ascii values range is from 0 to 255 (8 bits) 
}
