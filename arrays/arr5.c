#include<stdio.h>
void main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n;j++){
        if(arr[j]=arr[n-j-1]){
            printf("yes\n");
        }
        else printf("no");
    }
}