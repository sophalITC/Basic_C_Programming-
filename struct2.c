#include<stdio.h>
typedef struct employee{
    char name[60];
    int id;
    float income;
}employee;

int main(){
    int n;
    printf("Enter number of employee: ");scanf("%d",&n);
    employee e[n]; //array of structure (type def)
    for(int i=0; i<n;i++){
        printf("Enter %d employee name: ", i+1); scanf("%s",&e[i].name);
        printf("Enter %d employee ID: ", i+1); scanf("%d",&e[i].id);
        printf("Enter %d employee income: ", i+1); scanf("%f",&e[i].income);
        printf("___________________________________\n");
    }
    //display information
    return 0;
}
