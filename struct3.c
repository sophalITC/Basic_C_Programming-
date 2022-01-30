#include<stdio.h>
struct employee{
    char name[60];
    int id;
    float income;
};
//declaration
struct employee e1,e2,*ptr1,*ptr2;
int main(){
    ptr1 = &e1;
    ptr2 = &e2;
    printf("Enter first employee name: ");scanf("%s",&ptr1->name);//e1.name
    printf("Enter first employee ID: ");scanf("%d",&ptr1->id);
    printf("Enter first employee income: ");scanf("%f",&ptr1->income);
    printf("___________\n");
    printf("Employee 1 infromation: \n");
    printf("Name: %s",ptr1->name);
    printf("\nID: %d",ptr1->id);
    printf("\nIncome: %f",ptr1->income);
    return 0;
}

