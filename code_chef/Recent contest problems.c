#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	char s[1000];
	scanf("%d",&t);
	while(t--){
	    int n,count=0,c=0;
	    scanf("%d",&n);
	    
	    for(int i=0;i<n;i++){
	        scanf("%s",s);
	    
	   
	        if(s[0]=='S')
	        count++;
	        else if(s[0]=='L')
	        c++;
	            
	        
	    }
	    printf("\n%d %d",count,c);
	    count=0;
	    c=0;
	}
	return 0;
}

