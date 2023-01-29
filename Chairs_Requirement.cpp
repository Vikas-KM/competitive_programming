#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    int x, y;
    cin >> t;
    int max_num;
    while(t--){
        cin >> x >> y;
        if(x > y){
            cout << (x - y) << endl;
        }else{
            cout << 0 << endl;
        }
    }
}

