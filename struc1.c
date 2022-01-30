#include<stdio.h>
#include<string.h>
struct employee{
    char name[60];
    int id;
    float income;
};
int main(){
    struct employee e1,e2;
    printf("Welcome to employee information system: \n");
    printf("Enter first employee name: ");scanf("%s",&e1.name);
    printf("Enter first employee ID: ");scanf("%d",&e1.id);
    printf("Enter first employee income: ");scanf("%f",&e1.income);
    printf("___________________________________\n");
    printf("Enter second employee name: ");scanf("%s",&e2.name);
    printf("Enter second employee ID: ");scanf("%d",&e2.id);
    printf("Enter second employee income: ");scanf("%f",&e2.income);
    //name=pisey,id=45678, income=555.55
    printf("+++++++++++++++++++++++++++++++++\n");
    printf("Employee information: \n");
    printf("name: %s\n",e1.name);
    printf("Work ID: %d\n",e1.id);
    printf("Income: %.2f\n", e1.income);
    printf("___________________________________\n");
    printf("name: %s\n",e2.name);
    printf("Work ID: %d\n",e2.id);
    printf("Income: %.2f\n", e2.income);
    return 0;
}
