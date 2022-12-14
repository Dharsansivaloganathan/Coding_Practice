#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int p,q,r,s;
	    cin>>p >>q;
	    if(p%9==0){
	        r=p/9;
	    }
	    else{
	        r=p/9 +1;
	    }
	    if(q%9==0){
	        s=q/9;
	    }
	    else{
	        s=q/9 +1;
	    }
	    
	    
	    if(r>=s ){
	        cout<<"1 " <<s<<endl;
	    }
	    else{
	        cout<<"0 " <<r<<endl;
	    }
	}
	return 0;
}
