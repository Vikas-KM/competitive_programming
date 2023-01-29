#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int x;
    cin >> t;
    while(t--){
        cin >> x;
        if(x%2 == 0){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}