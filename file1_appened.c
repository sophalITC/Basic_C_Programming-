#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
void drink(){
    printf("[C]offe\n");
    printf("[M]ilk\n");
    printf("[G]reen Tea\n");
    printf("[I]ce tea\n");
    printf("[E]xit\n");
}
char *now(char *dt){
    time_t  current= time(NULL);
    struct tm *info=localtime(&current);
    strftime(dt,50, "%Y%m%dT%H%M%S",info);
    return dt;
}
int main(){
    char  dt[50]; //YMDTHMS
    drink();
    char a;
    FILE *f = fopen("record.txt","a");//append
    do{
        printf("Enter drink: ");
        scanf("%c", &a);
        a = (char) toupper(a);
        fprintf(f, "%s , %c\n",now(dt),a);
        fflush(stdin);
    }while(a !='E');
    fclose(f);
    return 0;
}