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
    vector<int> v(n);
    for(int i = 0;i < n;i++) cin >> v[i];

    int ans = 0;
    
    for(int i = 0;i < n;i++){
        ans = ans ^ v[i];
    }

    int setbit(int n,int pos){
        temp = ans;
        while((temp&1)!=1){
            pos++;
            temp = temp >> 1;
        }

    }

    int b1 = 0;
    int b2 = 0;
    for(int i = 0; i < n;i++){
        if (setBit(v[i],pos))
    }


}