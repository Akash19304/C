#include<stdio.h>
void main()
{
    int m=21,n;
    
    while(m>4){
        printf("pick 1,2,3 or 4 : ");
        scanf("%d",&n);
        if(n=1){
        m=m-1;}

        if(n=2){
        m=m-2;}

        if(n=3){
        m=m-3;}
        
        if(n=4){
        m=m-4;}
    }
    printf("%d",m);
    
}