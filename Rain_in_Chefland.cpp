#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    int x;
    cin >> t;
    int max_num;
    while(t--){
        cin >> x;
        if(x < 3)
            cout << "LIGHT\n";
        else if(x>=3 and x<7)
            cout << "MODERATE\n";
        else
            cout << "HEAVY\n";
    }
}

