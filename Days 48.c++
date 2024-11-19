#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    
	    int enough_storage=s-(x+y);
	    if(enough_storage>=z){
	        cout<<0<<endl;
	    }
	    else if(s-min(x,y)>=z){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	}

}
