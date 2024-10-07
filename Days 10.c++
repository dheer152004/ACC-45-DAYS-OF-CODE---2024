#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    
	    if((w==x) or (w==y) or (w==z) or (w==x+y)or(w==y+z)or(w==z+x)or(w==x+y+z)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
