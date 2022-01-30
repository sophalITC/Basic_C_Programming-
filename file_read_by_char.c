#include <stdio.h>
#include <ctype.h>
//read by char
int main(){
    FILE *f=fopen("lazy2.txt","r");//w , a
    FILE *f1 = fopen("lazy3.txt","w");
    int c;
    while((c=fgetc(f)) !=EOF){
      //  printf("%d, %c\n",c,c);
      //printf("%c",c+2);
        printf("%c",toupper(c));
      //lazy3.txt (upper case)
      fprintf(f1,"%c",toupper(c));
    }
    fclose(f);
    fclose(f1);
    return 0;
}