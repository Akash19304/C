#include <stdio.h>

int main() {
    int t,n,d,sum=0;
    scanf("%d\n",&t);
    for(int i=1;i<=t;i++){
        scanf("%d\n",&n);
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    printf("%d\n",sum);
    
	
	
	return 0;
}


