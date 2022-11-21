#include <stdio.h>

struct employee
{
    /* data */
    char name[50];
    int id;
    int salary;
    // float basicSal;

};

int main()
{
 int n ,i;
    printf("enter the number of employee");
    scanf("%d",&n);

     struct employee emp[n];
     for (int i = 0; i < n; i++)
     {
        printf("enter name %d\n",i+1);
        scanf("%s",&emp[i].name);
        printf("enter the salary of the employee");
        scanf("%d",&emp[i].salary);
        printf("enter id %d\n",i+1);
        scanf("%s",&emp[i].id);

     }
     for (int i = 0; i < n; i++)
     {
        int gross=0.35*emp[i].salary;
        printf("%s has salary of %d",emp[i].name,gross);
     }
     
     {
        /* data */
     };
     




    
    return 0;
}