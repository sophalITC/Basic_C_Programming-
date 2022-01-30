#include<stdio.h>

int main () {
    // array is data structure containe the same data type
        double total;
        int scoreMid[] = {80, 50, 60,56, 90};// array 1D
        int scoreFin[]= {76, 60, 50,70, 55};
        char gender[]= { 'M', 'F', 'F','M','F'};//ascii code
        for(int i =0; i<5;i++){
            total= 0.5* (scoreMid[i]+ scoreFin[i]);
            printf("scoreMid[%d] = %d, scoreFin[%d] = %d, Total score = %.2f \n",i, scoreMid[i], i,scoreFin[i],total);
        }
        int StudentScore[][5]={
                {80, 50, 60,56, 90},
                {76, 60, 50,70, 55},
                { 'M', 'F', 'F','M','F'}
        };
        printf("___________________________________________________\n");
        for (int i=0; i<5;i++){
            total= 0.5* (StudentScore[0][i]+ StudentScore[1][i]);
            printf("StudentScoreMid[0][%d] = %d, StudentScoreFin[1][%d] = %d,Total Score = %.2f\n",i,StudentScore[0][i],i,StudentScore[1][i],total );
        }
}

