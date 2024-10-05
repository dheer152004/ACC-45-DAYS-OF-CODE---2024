#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int P,Q,R,S;
        cin>>P>>Q>>R>>S;
        
        int sum=P+Q+R+S;
        
        if(sum/2<P||sum/2<Q||sum/2<R||sum/2<S){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

}
