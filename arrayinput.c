#include <stdio.h>

int main(){
    int num,st_score[100];
    char gen[100];
    int sum=0,count=0;
    double avg=0;
    printf(" Enter number of student: ");
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        int k=i+1;
        printf("Enter student %d score: ", k);
        scanf("%d",&st_score[i]);
        printf("Enter student %d gender: ", k);
        scanf("%c", &gen[i]);
        sum +=st_score[i];
        count++;
    }
    avg=sum/count;
    printf("Sum of all score is %d ",sum);
    printf("\nAvg of all score is %.2f",avg);

}