#include<stdio.h>
int countodd(int arr[],int n);

int main(){
    int c,arr[]={1,2,3,4,5};
    countodd(arr,5);
    printf("%d",countodd(arr,5));
    
    return 0;
}

int countodd(int arr[],int n){
    int c=0,i;
    for(i=0;i<n;i++){
        if(arr[i]%2 != 0){
            c++;}
       
    }
    return c;
}