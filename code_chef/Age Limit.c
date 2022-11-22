#include<stdio.h>
int main()
{
    int T,X,Y,A;
    scanf("%d\n",&T);
    while(T--)
    {
        scanf("%d %d %d\n",&X,&Y,&A);
        if(A>=X&&A<Y)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
