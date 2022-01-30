#include<stdio.h>
//prototype, function declaration
double rec(double x, double y);
double tri(double weight, double height);
double cir(double radius);

int main(){
    printf("the rectangle area of 30 and 20 is %.2f\n",rec(30,20));
    printf("the triangle area of 10 and 20 is %.2f\n",tri(10,20));
    printf("the circle area of  20 is %.2f\n",cir(20));

    return 0;
}
double rec(double a, double b) { //function definition
    double area =a*b;
    return area;
}
double tri(double a, double b){
    double area= 0.5*a*b;
    return area;
}
double cir(double r){
    double area = 3.14*r*r;
    return area;
}