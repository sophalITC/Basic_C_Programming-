


#include <stdio.h>

int main() {
//    for (int i = 1; i <= 12; i++) {
//        printf("%d x %2d = %3d\n", 9, i, 9 * i);
//    }
    for (int i = 1; i <= 12; i++) {
        for (int j = 2; j <= 7; j++) {
            printf("%2d x %2d = %3d%5s", j, i, j * i, " ");
        }
        printf("\n");
    }
}
