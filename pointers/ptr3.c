#include<stdio.h>
void pwr_fact(int a, int b, int num, int *pow, int *fact);

void main(){
    int a,b,num,fact,pow;
    printf("enter a and b: ");
    scanf("%d %d",&a,&b);
    printf("enter num:");
    scanf("%d",&num);
    pwr_fact(a,b,num,&pow,&fact);
    printf("power= %d, factorial= %d",pow,fact);


}

void pwr_fact(int x, int y, int num, int *pow, int *fact){
    int i,res=1,resf=1;
    for(i=1;i<=y;i++){
        res=res*x;
    }
    *pow=res;

    for(i=1;i<=num;i++){
        resf=resf*i;
    }
    *fact=resf;
}