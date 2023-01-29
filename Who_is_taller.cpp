#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y;
    while(t--){
        cin >> x >> y;
        if(x > y){
            cout << "A\n";
        }else{
            cout << "B\n";
        }
    }
    return 0;
}