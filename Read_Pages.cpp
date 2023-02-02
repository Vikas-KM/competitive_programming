#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y, z;
    while(t--){
        cin >> x >> y>>z;
        cout << (y*z>=x?"YES\n":"NO\n");
    }
    return 0;
}