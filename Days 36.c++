#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int N;
	    cin>>N;
	    
	    int m=0;
	    if(N%7==0){
	        m=N/7;
	    }
	    else{
	        m=N/7;
	        if(N%7>=2) m++;
	    }
	    cout<<m<<endl;
	}

}
