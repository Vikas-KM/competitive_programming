#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y, z;
    while(t--){
        cin >> x >> y >> z;
        cout << (x >= (y+2*z) ? "YES\n" : "NO\n");
    }
    return 0;
}