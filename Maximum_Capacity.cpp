#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y;
    while(t--){
        cin >> x >> y;
        if(x <= 8 and x*y <= 500){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
            
    }
    return 0;
}