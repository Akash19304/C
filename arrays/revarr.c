#include<stdio.h>
void reverse(int arr[],int n);

void main(){
    int k,j;
    int arr[]={1,2,3,4};
    for(k=0;k<4;k++){
        printf("%d\t",arr[k]);
    }
    reverse(arr,4);
    for(j=0;j<4;j++){
        printf("%d",arr[j]);
    }

}

void reverse(int arr[],int n){
    int t,i;
    for(i=0;i<n/2;i++){
        t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
   
}