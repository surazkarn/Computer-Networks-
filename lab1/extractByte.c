/* Write a C program to extract each byte from a given number and bring them using binary operator. */

#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter number: ");
    scanf("%d", &num);


for (int i = 0; i < 4; i++)
{
    printf("Byte %d -> %d\n", i + 1, num & 0xff);
    //num & 0xff will give us the lowest 8 bits from num.
    //value 0xff is equivalent to 255 in unsigned decimal, -127 in signed decimal, and 11111111 in binary.
     num >>= 8;
}
 return 0;
}