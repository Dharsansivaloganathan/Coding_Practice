#include<stdio.h>
int main()
{
    int n,bin[100],i,j;
    n=21;
    i=0;
    while(n>0)
    {
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    printf("%d",bin[j]);
    return 0;
}
