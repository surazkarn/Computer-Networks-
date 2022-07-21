#include<stdio.h>  
  
void swap(int*, int*);  
  
int main()  
{  
    int a, b;  
  
    printf("Enter values for a and b\n");  
    scanf("%d%d", &a, &b);  
  
    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(&a, &b);  
  
    printf("\nAfter swapping: a = %d and b = %d\n", a, b);  
  
    return 0;  
}  
  
void swap(int *x, int *y)  
{  
    int temp;  
  
    temp = *x;  
    *x   = *y;  
    *y   = temp;  
}  

/*

#include<stdio.h>
int main(){
    int *a,*b,x,y;
    printf("Enter a:");
    scanf("%d",&x);
    printf("Enter b:");
    scanf("%d",&y);
    a=&x;
    b=&y;
    printf("The value before swapping:\na=%d,b=%d\n",*a,*b);
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("The value after swapping:\na=%d,b=%d\n",*a,*b);
    return 0;
}

*/