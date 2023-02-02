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
        if(2*x > 5*y)
            cout << "Chocolate\n";
        else if(2*x == 5*y)
            cout << "Either\n";
        else
            cout << "Candy\n";
    }
}

