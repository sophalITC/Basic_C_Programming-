#include <stdio.h>

int main(){
    // number, int (%d), float/double (%f)
    //IPO=Input, process, output
    int a;
    double b;
    float c;
    a=17;
    b=34.9;
    c=23.13;
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    int h=40;
    double t=56.9;
    printf("%d\n", h);
    printf("%f\n", t);
    h=h+20;
    printf("new value of h = %d\n",h);
    // charactor (%c)  vs string( array of charactor) (%s)
    char *country1="Cambodia";
    char country2[]="Thailand";
    printf("%s\n", country1);
    printf("%s\n", country2);
    char letter ='A';
    printf("%c\n",letter);
}
