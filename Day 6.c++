#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X, Y;
        cin >> X >> Y; 
        int score_A_first = max(500 - 2 * X, 0) + max(1000 - 4 * (X + Y), 0);
        int score_B_first = max(1000 - 4 * Y, 0) + max(500 - 2 * (X + Y), 0);

        cout << max(score_A_first, score_B_first) << endl;
	}
}
