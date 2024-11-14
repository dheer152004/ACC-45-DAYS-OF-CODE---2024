#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    
	    if(p<=(3*x)-(n-x)) cout<<"Pass"<<endl;
	    else cout<<"Fail"<<endl;
	}

}
