#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int N;
	    cin>>N;
	    
	    int A[N];
	    int degree;
	    
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	        if(A[i]!=0){
	            degree=i;
	        }
	    }
	    cout<<degree<<endl;
	}

}
