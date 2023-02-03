#include<stdio.h>
void main(){
    int A[5],B[5],i,j;
    
    for(int c=0;c<=4;c++){
        scanf("%d",&A[c]);
    }
    for(i=0,j=4;i<=4,j>=0;i++,j--){
        B[j]=A[i];
    }
    for(int k=0;k<=4;k++){
        printf("%d\t",B[k]);
    }
}