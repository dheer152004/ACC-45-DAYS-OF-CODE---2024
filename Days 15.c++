#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,k,m;
	    cin>>n>>k>>m;
	    
	    int pocket=k*m;
	    
	    if(n%pocket==0){
	        cout<<n/pocket<<endl;
	    }
	    else{
	        cout<<n/pocket+1<<endl;
	    }
	}

}
