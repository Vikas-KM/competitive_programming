#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y;
    string result;
    while(t--){
        cin >> x >> y;
        if(x <= y){
            cout << x << "\n";
        }else{
            cout << y << "\n";
        }
    }
    return 0;
}