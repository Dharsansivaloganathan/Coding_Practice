#include<stdio.h>
int main( )
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int x,y,z;
       scanf("%d %d %d",&x,&y,&z);
       if((y-z)>=x)
       printf("yes\n");
       else
       printf("no\n");
    }
    return 0;
}
