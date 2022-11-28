#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,n;
        scanf("%d %d",&a,&b);
        n=a+b;
        if(n==2||n==3||n==5||n==7||n==11)
        printf("alice\n");
        else
        printf("bob\n");
    }
}
    
