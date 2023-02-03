#include<stdio.h>
void swap(int *x,int *y);

void main(){
     int a=10,b=20;
     printf("a=%d, b=%d\n",a,b);

     swap(&a,&b);
     printf("a=%d, b=%d\n",a,b);

}

void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}