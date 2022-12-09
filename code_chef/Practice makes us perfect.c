# include <stdio.h>
int main()
{
    int P[4];
    int x=0;
    for(int i =0 ; i<4 ; i++) {
        scanf("%d" , &P[i]);
    }
    for(int j=0 ; j<4 ; j++) {
        if (P[j]>=10) {
            x=x+1;
        }
    }
    printf("%d" , x);
    return 0 ;
}
