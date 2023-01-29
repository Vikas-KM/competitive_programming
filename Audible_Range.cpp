#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x;
    while(t--){
        cin >> x;
        if(x >= 67 and x<= 45000){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}