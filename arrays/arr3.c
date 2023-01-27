#include<stdio.h>

void main(){
    int n;
    
    int t1=0,t2=1,t3,i,j;
     printf("enter n- ");
    scanf("%d",&n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n;i++){
        t3=t1+t2;
        t1=t2;
        t2=t3;
        arr[i]=t3;
    }
    for(j=0;j<n;j++){
        printf("%d\t",arr[j]);
    }
}