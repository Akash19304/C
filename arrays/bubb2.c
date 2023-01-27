#include<stdio.h>
void main() {
    int size,temp;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<size;i++) {
        for(int j=0;j<size-i-1;j++) {
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<size;i++) {
        printf("%d, ",arr[i]);
    }
    
}