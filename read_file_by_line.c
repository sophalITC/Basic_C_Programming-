#include <stdio.h>
#include <string.h>
char *rmLine(char *s){
    char *p =strchr(s, '\n');
    *p='\0';
    return s;
}
int main(){char *
    FILE *f =fopen("movie.txt", "r");
    char name[300] = "";
    int line =0;
    while((fgets(name,300, f)) !=NULL){
        printf("%d: %s\n",++line,rmLine(name));
    }
}

