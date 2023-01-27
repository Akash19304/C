#include<stdio.h>
void main()
{   int i,j,c;
    printf("2\n");
    for(i=3;i<=100;i++){
        c=0;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                c=1;
                break;
            }
            } 
            
        if(c==0){
                printf("%d\n",i);
            }
            
          
    }
}