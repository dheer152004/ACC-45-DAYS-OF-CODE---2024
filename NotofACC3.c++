#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x;
	    cin>>x;
	    if(x<4){
	        cout<<1<<endl;
	    }
	    else if(x%4==0){
	        cout<<x/4<<endl;
	    }
	    else {
	        cout<<(x/4)+1<<endl;
	    }
	}

}
