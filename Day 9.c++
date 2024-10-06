#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,y,ans;
	    cin>>x>>y;
	    
	    
	    if(y%x==0){
	        ans=(y/x)-1;
	    }
	   // if(y==x){
	   //     ans=0;
	   // }
	    else{
	        ans=y/x;
	    }
	    cout<<ans<<endl;
}
}
