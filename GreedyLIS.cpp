
#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>

using namespace std;

void LIS_Vector(int N, int X) {
    vector<int> ans(N, 0);

    if (X == 0) {
        for (int i = 0; i < N; i++) {
            cout << i+1;
        }
    } else {
        for(int i = 1;i < N-X-1;i++){
            cout <<  i;
        }
        cout << N;
        for(int i = N-X-1;i < N;i++){
            cout <<  i;
        }
    }
}

int main() {

    int T;
    cin >> T;  // Initialize T
    while (T--) {
        int N, X;
        cin >> N >> X;
        cout << N << " " << X; // Separate N and X with a space
        if (N - 1 == X or X > N) {
            cout << -1;
        } else {
            LIS_Vector(N, X);
        }
    }

    return 0; // Add a return statement for the main function
}
