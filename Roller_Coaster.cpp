#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int x, h;
    cin >> t;
    while(t--){
        cin >> x >> h;
        if(x>=h){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}