#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if(x>=y){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}