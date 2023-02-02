#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y, z;
    while(t--){
        cin >> x >> y >> z;
        if(x>y and x>z)
            cout << "Alice\n";
        else if(y>x and y>z)
            cout << "Bob\n";
        else
            cout << "Charlie\n";
    }
    return 0;
}