#include <stdio.h>
int main()
{
    int p,n;
    float r,si;
    printf("enter values of p,n,r");
    scanf("%d\n %d\n %f",&p, &n, &r);   /*input values should be separated accordingly as type specifiers. 
                                          \n means input values in new line(using enter)*/
    si=p*r*n/100;
    printf("simple interest=%f",si);
    return 0;
}
