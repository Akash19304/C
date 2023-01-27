#include<stdio.h>

void main()
{
    int c,d,temp;
    printf("enter c:");
    scanf("%d",&c);
    printf("enter d:");
    scanf("%d",&d);
    temp=c;
    c=d;
    d=temp;
    printf("value of c %d",c);
    printf("\nvalue of d %d",d);
    
    

}