#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin>>t;
	
	while(t--){
	
    ll n;
    cin>>n;

    ll e,s=0;
    for(ll i=1;i<=n;i++){
        cin>>e;
        s+=e;
    }

    s=abs(s);
    if(s%2){
        cout<<-1<<endl;
    }else{
        cout<<s/2<<endl;
    }    
    
	}

}
