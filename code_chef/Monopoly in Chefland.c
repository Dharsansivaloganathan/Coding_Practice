
#include <stdio.h>

int main(void) {
	// your code goes here
	int test_cases,r1,r2,r3;
	scanf("%d",&test_cases);
	while(test_cases--)
	{
	    scanf("%d%d%d",&r1,&r2,&r3);
	    if(r3>r1+r2 || r2>r1+r3 || r1>r2+r3)
	       printf("Yes\n");
	    else
	       printf("No\n");
	}
	return 0;
}
