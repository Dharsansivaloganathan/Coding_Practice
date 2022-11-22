#include <stdio.h>

int main() {
	int t,a,b,x,y;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d %d",&a,&b,&x,&y);
	     if(a<=b)
	     {
	         if(b-a<=x)
	          printf("YES\n");
	         else
	          printf("NO\n");
	     }
	     else
	     {
	         if(a-b<=y)
	          printf("YES\n");
	         else
	          printf("NO\n");
	     }
	     
	}
	return 0;
}
