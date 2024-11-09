#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
	int t;
	cin>>t;
	
	while(t--){
	    ll n,a,b;
	    cin>>n>>a>>b;
	    
	    ll rounds=0;
	    
	    while(n>1){
	        n/=2;
	        rounds++;
	    }
	    if(rounds==0) cout<<0<<endl;
	    else{
	        cout<<(rounds-1)*b +a*rounds<<endl;
	    }
	    
	}
	return 0;
}
