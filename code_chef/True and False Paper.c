#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k,d;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&n,&k);
	    d=n-k;
	    printf("%d\n",d);
	}
	return 0;
}

