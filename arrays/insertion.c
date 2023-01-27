#include<stdio.h>
int main()
{
    int size,temp,j;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++) {
        temp = arr[j = i+1];
        while(temp < arr[j-1] && j>0) {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = temp;

    }

     for(int i=0;i<size;i++) {
        printf("%d, ",arr[i]);
    }
    return 0;
}
