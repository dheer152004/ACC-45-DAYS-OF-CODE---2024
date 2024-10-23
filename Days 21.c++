#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int h, x, y;
        cin >> h >> x >> y;

        int attacks = ceil((h - y) / (x * 1.0)) + 1;
        // if(y >= h) attacks = 1; 
        cout << attacks << endl;
    }

    return 0;
}
