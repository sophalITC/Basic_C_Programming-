// menu 1. green tea (6000),2.latte (8000),3. espresso (5000), 4. cappuccino (7000)
#include <stdio.h>

int main(){
    char n;
    printf("1. [G]reen tea\n");
    printf("2. [L]atte\n");
    printf("3. [E]spresso\n");
    printf("4. [C]appuccino\n");
    printf("Enter your order: ");
    scanf("%s", &n);
    switch(n){
        case '1':
        case 'G':
            printf("You ordered green tea with charge 6000 Riel!!");
            break;
        case '2':
        case 'L':
            printf("You ordered latte with charge 8000 Riel!!");
            break;
        case '3':
        case 'E':
            printf("You ordered espresso with charge 5000 Riel!!");
            break;
        case '4':
        case 'C':
            printf("You ordered cappucino  with charge 7000 Riel!!");
            break;
        default :
            printf("Invalid order !!");
    }
}
