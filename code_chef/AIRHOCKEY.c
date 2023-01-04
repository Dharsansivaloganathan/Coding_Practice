
#include <stdio.h>

int main() {
	int t,x,y,max,p;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	    scanf("%d",&y);
	    if(x>y)
	    {
	        max=x;
	    }
	    else
	    {
	        max=y;
	    }
	    p=7-max;
	    printf("%d\n",p);
	}
	return 0;
}
