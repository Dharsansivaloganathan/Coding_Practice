#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
            for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
           }
            int l=0,r=n-1,count=0;
            while(l<r){
            if(a[l]==a[r])
{
            l++;
            r--;
}
            else if(a[l]<a[r])
 {
            a[r]=a[r]-a[l];
            l++;
            count++;
 }           
            else if(a[l]>a[r])
            {
              a[l]=a[l]-a[r];
              r--;
              count++;
            }
            
        }
        printf("%d\n",count);
    }
    return 0;
}
