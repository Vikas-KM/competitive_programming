#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    int x, y, z;
    cin >> t;
    int max_num;
    while(t--){
        cin >> x >> y >> z;
        max_num = max(max(x, y), z);
        if(x == max_num){
            cout << max(y, z) << endl;
        }else if(y == max_num){
            cout << max(x, z) << endl;
        }else{
            cout << max(x, y) << endl;
        }
    }
}

