#include<stdio.h>
void sort(int *n[],int f,int l);
void main() {
    int n[] = {2,0,5,9,3,8,1};
    sort(&n,0,6);
    for(int i=0;i<7;i++) {
        printf("%d", n[i]);
    }
}
void sort(int *n[],int f, int l) {
    if(f>=l)return;
    int pivot = l;
    for(int i=f;i<l;i++) {
        if(n[pivot] < n[i]) {
            int temp = n[i];
            for(int j=i;j<pivot;j++) {
                n[j] = n[j+1];
            }n[pivot] = temp;
            pivot--;
        }
    }
    sort(n,f,pivot-1);
    sort(n,pivot+1,l);
}