#include<stdio.h>
void sumavg(int *sum,int *avg);

void main(){
    int sum,avg;
    sumavg(&sum,&avg);
    printf("sum=%d, average=%d",sum,avg);
}

void sumavg(int *sum,int *avg){
    int n1,n2,n3;
    printf("enter numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    *sum=n1+n2+n3;
    *avg=(n1+n2+n3)/3;
}