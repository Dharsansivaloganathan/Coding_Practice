#include <stdio.h>

int main(void) {
	int t,x,y,s;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    s=x*y;
	    printf("%d\n",s);
	}
	return 0;
}

