/*#include <stdio.h>

int main(){
    *//*int age=77;
    if (age < 10 || age > 55) {
        printf("you can eat for free!\n");
    } else {
        printf("you have to pay\n");
    }*//*
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    *//*if(a % 2 == 0){
        printf("Even Number!");
    }else{
        printf("Odd Number!!");
    }*//*
    a%2 ==0 ? printf("Even Number!") : printf("Odd Number!!");
}*/

// menu 1. green tea (6000),2.latte (8000),3. espresso (5000), 4. cappuccino (7000)
#include <stdio.h>
/*

int main(){
    int n;
    printf("1. green tea\n");
    printf("2. latte\n");
    printf("3. espresso\n");
    printf("4. cappuccino\n");
    printf("Enter your order: ");
    scanf("%d", &n);
    if(n==1){
        printf("You ordered green tea with charge 6000 Riel!!");
    }else if(n==2){
        printf("You ordered latte with charge 8000 Riel!!");
    }else if (n==3){
        printf("You ordered espresso with charge 5000 Riel!!");
    }else if (n==4){
        printf("You ordered cappucino  with charge 7000 Riel!!");
    }else{
        printf("Invalid order !!");
    }
}
*/

int gcd1(int a, int b){
    int min = a < b ? a :b;
    for (int i=min;i>=1;i--){
        if(a % i==0 && b %i ==0){
            return i;
        }
    }
}

int main(){
    int a = 9;
    int b = 21;
    int i;
    int gcd;
    int min=a<b ? a:b;
    for (i=min; i>=1;i--){
        if(a%i==0 && b%i==0){
            gcd=i;
            printf("gcd(%d, %d) = %d\n",a ,b ,gcd);
            break;
        }
    }
    printf("Second of gcd(%d, %d) = %d\n",a ,b ,gcd1(a,b));
}
