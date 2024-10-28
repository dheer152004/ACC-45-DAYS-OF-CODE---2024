#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,k,ans=0;
	    cin>>n>>k;
	    
	    while(n--){
	        int a;
	        cin>>a;
	        if((a+k)%7==0) ans++;
	    }
	    cout<<ans<<endl;
	}

}
