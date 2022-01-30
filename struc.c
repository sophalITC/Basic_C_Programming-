#include<stdio.h>
#include<string.h>
struct employee{
    char name[60];
    int id;
    float income;
}e1,e2;
int main(){
    strcpy(e1.name,"Dara");
    e1.id=23456;
    e1.income=350.5;
    //name=pisey,id=45678, income=555.55
    printf("Employee information: \n");
    printf("name: %s\n",e1.name);
    printf("Work ID: %d\n",e1.id);
    printf("Income: %.2f\n", e1.income);
    printf("___________________________________\n");
    strcpy(e2.name,"Pisey");
    e2.id=45678;
    e2.income=555.55;
    printf("name: %s\n",e2.name);
    printf("Work ID: %d\n",e2.id);
    printf("Income: %.2f\n", e2.income);
    return 0;
}
