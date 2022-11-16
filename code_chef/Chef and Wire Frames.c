#include <stdio.h>

int main(void) {
	int T,N,M,X,K;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d%d%d",&N,&M,&X);
	    K=(2*(N+M)*X);
	    printf("%d\n",K);
	}
	return 0;
}
