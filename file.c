//write file
#include <stdio.h>

int main(){
    FILE *f=fopen("test.txt","w"); //r,a
    fprintf(f, "Hello, Cambodia!!\n");
    fprintf(f, "I love coding\n");
    fprintf(f, "I am studying at ITC\n");
    fprintf(f,"%c\n",'A');
    fprintf(f,"%d\n",349);
    fprintf(f,"%.2f\n",45.345*23.76);

    fclose(f);
}
