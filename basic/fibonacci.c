#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    n=n-2;
    while(n>0)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
    return 0;
}
