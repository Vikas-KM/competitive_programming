#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y;
    while(t--){
        cin >> x >> y;
        cout << (y >= x ? (y - x) : 0) << endl;
    }
    return 0;
}