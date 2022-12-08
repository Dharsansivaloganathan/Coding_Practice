#include<stdio.h>
int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        int a,c,b;
        scanf("%d %d", &a,&c);
        b=(a+c)/2;
        if((a+c)%2==0){
            printf("%d\n", b);
        }
        else
        printf("-1\n");
    }
    return 0;
}
