
#include <stdio.h>

int main(void) {
int t;
scanf("%d", &t);

while(t--)
{
   int x,y;
   scanf("%d %d", &x, &y);
   
   if(x<y)
   {
       printf("FIRST\n");
   }
   if(y<x)
   {
       printf("SECOND\n");
   }
   if(x==y)
   {
       printf("ANY\n");
   }
}
return 0;
}

