#include <stdio.h>

int main(void) {
    int t,n,a;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        if(n%3 == 1) {
            printf("HUGE\n");
        }
        else if(n%3 == 2) {
            printf("SMALL\n");
        }
        else if(n%3 ==0) {
            printf("NORMAL\n");
        }
    }
	// your code goes here
	return 0;
}
