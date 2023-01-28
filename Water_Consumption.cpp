#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x;
    string result;
    while(t--){
        cin >> x;
        result = (x >= 2000) ? "YES\n" : "NO\n";
        cout << result;
    }
    return 0;
}