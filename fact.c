#include<stdio.h>
void main()
{
   int i,n,fact;
   
   fact=1;
   for(i=1,i<=7;i++){
      for(j=1;j<=7;j++){
         fact=fact*j;
      }
      sum=i/fact
   }
  printf("series sum =%d",sum);
   
}
