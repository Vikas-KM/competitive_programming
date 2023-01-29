#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y;
    int score;
    while(t--){
        cin >> x >> y;
        score = (x / 10) * y;
        cout << score << "\n";
    }
    return 0;
}