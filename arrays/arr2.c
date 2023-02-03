#include<stdio.h>
void main(){
    int t;
    int num[]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<=9;i=i+2){
        t=num[i];
        num[i]=num[i+1];
        num[i+1]=t;
    }
    for(int j=0;j<=9;j++){
        printf("%d\t",num[j]);

    }
}