#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> ans(n, vector<int>(32, 0));

    for(int i = 0; i < 32; i++){
        for(int i = 0;i < n;i++){
            if(j&(1<<i)){
                arr[j][i] = arr[]
            }
        }
    }
}