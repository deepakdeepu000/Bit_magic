#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int a;
    cin >> a;
    int arr[a];
    for(int i = 0;i < a;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < a;i++){
        for(int j = i+1; j < a; j++){
            sum += arr[i]^arr[j];     
    }
    }
    cout << sum ;
}
