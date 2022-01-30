//function (void, return value (int,char,float))
#include<stdio.h>

void intro(){ // function definition
    printf("Hi My name is John\n");
    printf("I love coding\n");
}
//void function of sum 2 numbers
void sum2(){
    int a=50, b=40;
    printf("sum of %d and %d is %d\n",a,b,a+b);
}
int sum2_1(int a, int b){
    return a+b;
}
// return function as double value (rectangle, triangle, circle)
double rec(double a, double b) {
    double area =a*b;
    return area;
}

double tri(double a, double b){
    double area= 0.5*a*b;
    return area;
}

double cir(double r){
    double area = 3.14*r*r;
}

int main(){
    intro();// function call
    sum2();
    printf("Hello\n");
    printf("____________________________\n");
    printf("the vale of sum2_1 function is %d\n",sum2_1(23,40));
    printf("the rectangle area of 30 and 20 is %.2f\n",rec(30,20));
    //
    //
    return 0;
}
