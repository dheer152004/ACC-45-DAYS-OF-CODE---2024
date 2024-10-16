#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    if(n<=10) cout<<"Lower double"<<endl;
	    if(n>10 and n<=15) cout<<"Lower single"<<endl;
	    if(n>15 and n<=25) cout<<"Upper Double"<<endl;
	    if(n>25 and n<=30) cout<<"Upper single"<<endl;
	}

}
