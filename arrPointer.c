#include<stdio.h>

int main(){
    int n =56;
    int m=56;
    //printf(" n= %d, &n = %p\n", n, &n);//point to memory address of n
    //printf(" m =%d, &m = %p\n",m, &m);
  /* int *p1; // p1 is a pointer to int
   int * p3;
   int* p2;
   char *d1;// d1 is a pointer to char*/
  int *p1;
  p1 = &m;
  printf("p1 = %p\n", p1);
  printf("*p1 = %d\n", *p1);
}
