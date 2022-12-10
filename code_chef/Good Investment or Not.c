#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&x,&y);
	    if(2*y <= x)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

