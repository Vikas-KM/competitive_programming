#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x;
    while(t--){
        cin >> x;
        if(x > 100){
            cout << (x - 10) << "\n";
        }else{
            cout << x << "\n";
        }
    }
    return 0;
}