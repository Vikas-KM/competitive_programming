#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x;
    while(t--){
        cin >> x;
        cout << (x>=1 && x<=4?"YES\n":"NO\n");
    }
    return 0;
}