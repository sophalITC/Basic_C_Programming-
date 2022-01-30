


#include <stdio.h>
int main() {
int num;
printf("Enter number : ");
scanf("%d", &num);
    if (num<=7) {
        for (int i = 1; i <= 12; i++) {
            for (int j = 2; j <= num; j++) {
                printf("%2d x %2d = %3d%5s", j, i, j * i, " ");
            }
            printf("\n");
        }
    }
    if(num>7) {
        for (int i = 1; i <= 12; i++) {
            for (int j = 2; j <= 7; j++) {
                printf("%2d x %2d = %3d%5s", j, i, j * i, " ");
            }
            printf("\n");
        }
        printf("+++++++++++++++++++++++++++++++++++++++++\n");
        for (int i = 1; i <= 12; i++) {
            for (int j = 8; j <= num; j++) {
                printf("%2d x %2d = %3d%5s", j, i, j * i, " ");
            }
            printf("\n");
        }
    }
}

