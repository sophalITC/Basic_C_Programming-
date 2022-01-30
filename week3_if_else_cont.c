#include <stdio.h>

int main(){
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if(score>=90 && score<=100){
        printf("You got grade A !");
    }
    if(score>=80 && score<=89){
        printf("You got grade B !");
    }
    if(score>=70 && score<=79){
        printf("You got grade C !");
    }
    if(score>=60 && score<=69){
        printf("You got grade D !");
    }
    if(score>=50 && score<=59){
        printf("You got grade E !");
    }
    if(score>=0 && score<=49){
        printf("You are failed!!");
    }
    if(score>=101 || score<0){
        printf("Error!");
    }

}