#include<stdio.h>

void main()
{
    int i,t,j,a[]={5,4,2,10,16};
    for(i=0;i<4;i++){
        for(j=0;j<5-i-1;j++){
            if(a[j]<a[j-1]){
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
    for(int k=0;k<5;k++){
        printf("%d\t",a[k]);
    }
}
  