
 

 #include<stdio.h>
typedef unsigned char BYTE;

int main()
{
unsigned int value=0x11223344;
//int value=258;
printf("Enter number: ");
    scanf("%d", &value);
BYTE a,b,c,d;

a=(value&0xFF);
b=((value>>8)&0xFF);
c=((value>>16)&0xFF);
d=((value>>24)&0xFF);
//>> right shift

//%02x means print at least 2 digits
printf("a= %02X\n",a);
printf("b= %02X\n",b);
printf("c= %02X\n",c);
printf("d= %02X\n",d);
return 0;
}
