#include <stdio.h>
int main()
{
    int i=1,j;
    while (i <= 5)
    {
        j=1;
        while (j <= i )
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;// i =i+1
    }
    return 0;
    //for loop
}