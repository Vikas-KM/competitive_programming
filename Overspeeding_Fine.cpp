#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x;
    while(t--){
        cin >> x;
        if(x<= 70)
            cout << 0 << endl;
        else if(x>70 and x<=100)
            cout << 500 << endl;
        else
            cout << 2000 << endl;
    }
    return 0;
}