#include <bits/stdc++.h>
using namespace std;

void LIS_Vector(int N, int X) {
    vector<int> ans(N, 0);

    if (X == 0) {
        for (int i = 0; i < N; i++) {
            ans[i] = i;
        }
    } else {
        ans[X - 1] = N;
        for (int i = 0; i < N; i++) {
            if (i != X - 1) {
                ans[i] = i;
            }
        }
    }
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;  // Initialize T
    while (T--) {
        int N, X;
        cin >> N >> X;
        cout << N << " " << X; // Separate N and X with a space
        if (N - 1 != X or N > X) {
            cout << -1;
        } else {
            LIS_Vector(N, X);
        }
    }

    return 0; // Add a return statement for the main function
}
