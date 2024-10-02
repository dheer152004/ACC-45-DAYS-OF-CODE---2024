#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
	int B1,B2,B3;
	
	while(T--){
	cin>>B1>>B2>>B3;
	    int sum=B1+B2+B3;
	    if(sum<=1){
	        cout<<"Water filling time"<<endl;
	    }
	    else{
	        cout<<"Not now"<<endl;
	    }
	}
	
}
