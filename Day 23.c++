#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int N;
        cin>>N;
        
        int s=0;
        int l=0;
        string str;
        
        while(N--){
            cin>>str;
            if(str=="START38")
                s++;
            else
            l++;
        }
        cout<<s<<" "<<l<<endl;
    }

}
