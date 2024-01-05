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
    vector<int> nums(n);
    for(int i = 0;i < n;i++){
        cin >> nums[i];
    }

    unordered_map<int,int> mp;
    for(int i  = 0;i < n; i++){
        mp[nums[i]]++;
    }

    int moves = 0;
    for(auto it: mp){
        if(it.second == 1){
            cout << -1 << " ";
        }
        else{
            
            if(n >= 2){
                int mod3 = it.second/3;
                int rem = it.second%3;
                if(rem == 1){
                    moves += mod3+1;
                    // moves += (cnt_3-1)+(rem+3)/2;
                }
                else{
                    moves += mod3+(rem)/2;
                }
            }
            else{
                moves += 1;
            }
            }
    }
    cout << moves ;
}
