#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y, a;
    while(t--){
        cin >> x >> y >> a;
        if(a>=x and a <y){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}