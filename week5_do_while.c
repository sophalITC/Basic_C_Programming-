#include <stdio.h>

int main(){

    int num,sum=0, num1,sum1=0;
    /*printf(" Enter number : ");
    scanf("%d", &num);
    while(num != 0){
        sum= sum+num;
        printf("Enter number : ");
        scanf("%d", &num);
    }
    printf("Sum of all number above is : %d   \n", sum);*/
    //do/while
    do{
        printf(" Enter number(do) : ");
        scanf("%d", &num1);
        sum1 +=num1;
    }while(num1 !=0);
    printf("Sum of all number above is : %d   \n", sum1);
}