
#include<stdio.h>
int main() {
    int num,j;
    printf("Enter number : ");
    scanf("%d",&num);
    int i=1;
    if (num<=7) {
        while(i<=12){
            for (j = 2; j <= num; j++) {
                printf(" %2d x %2d = %2d\t",j, i, i*j);
            }
            printf("\n");
            i++;
        }
    }
    if(num>7){
        while(i<=12){
            for (j = 2; j <= 7; j++) {
                printf(" %2d x %2d = %2d\t",j, i, i*j);
            }
            printf("\n");
            i++;

        }
        printf("\n\n*************************************************************************\n");
        int k=1;
        while(k<=12){
            for (j = 8; j <= num; j++) {
                printf(" %2d x %2d = %2d\t",j, k, k*j);
            }
            k++;
            printf("\n");
        }
    }
}