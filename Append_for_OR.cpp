#include <iostream>

using namespace std;

int main(){
    // Number of test cases
    int t;
    cin >> t;
    while (t--){
        // size of array and final OR
        int N, y;
        cin >> N >> y;
        int OR=0, x;
        for (int i = 0; i < N; i++){
            cin >> x;
            OR = OR | x;
        }
        int ans;
        ans = OR ^ y;
        cout << (((ans | OR) == y)? ans: -1) << endl;
    }
}