//wap to import student information name,roll and marks in 5 subjects and display without using pointer to structure 

#include<stdio.h>
struct Student{
    char name[20];
    int roll;
    int marks[5];
};
int main(){
    struct Student P;
    printf("Enter student name:");
    scanf("%s",P.name);
    printf("Enter student roll:");
    scanf("%d",&P.roll);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks in subject %d:",i);
        scanf("%d",&P.marks[i]);
    }
    printf("\nName:%s\n",P.name);
    printf("Roll:%d\n",P.roll);
    for (int i = 0; i < 5; i++)
    {
        printf("Marks in subject %d:%d\n",i,P.marks[i]);
    }
    
}