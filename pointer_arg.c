#include<stdio.h>

void test(int x, int *y){
    x=x+10;//70 (add1...)
    *y=*y+10;
}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b=t;
}
int main(){
    int a=60, b=20;
    test(a,&b);
    printf(" a= %d, b=%d\n",a,b);//a=70,b=, a=0,b=0  (a=60, b=30)
    swap(&a,&b);
    printf(" a = %d, b=%d\n",a,b);
}
