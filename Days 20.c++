#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    if(2*a>b)
	    {
	        cout<<"first"<<endl;
	    }
	    else if(2*a<b)
	    {
	        cout<<"second"<<endl;
	    }
	    else
	    {
	        cout<<"any"<<endl;
	    }
	}

}
