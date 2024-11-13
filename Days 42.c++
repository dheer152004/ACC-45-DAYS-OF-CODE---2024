#include <bits/stdc++.h>
using namespace std;

int main() {
	int TC;
	cin>>TC;
	
	while(TC--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    cout<<a+b+c -min({a,b,c})<<endl;
	}

}
