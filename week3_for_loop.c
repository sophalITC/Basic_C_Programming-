#include<stdio.h>
int main() {
    {
        int a[1000],i,n,min,max,mean=0,sum=0;
        printf("N : ");
        scanf("%d",&n);
        printf("");
        for(i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        min=max=a[0];
        for (i=1;i<n;i=i+1){
            sum = sum + a[i] ;
            mean = sum/n ;}
        for(i=1; i<n; i++){
            if(min>a[i])
                min=a[i];
            if(max<a[i])
                max=a[i];}
        printf("\nMean: %d ",mean) ;
        printf("\nMin: %d",min);
        printf("\nMax: %d",max);
        return 0;
    }
}