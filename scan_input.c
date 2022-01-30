//IPO
#include <stdio.h>
#include <conio.h>

int main(){
    int num1,num2, sum;

    printf("Enter first number value: ");
    scanf("%d", &num1);// input by user

    printf("Enter second number value: ");
    scanf("%d", &num2);// input by user

    sum =num1 +num2;
    printf("Sum of these two numbers = %d\n",sum);
    getch();
}

