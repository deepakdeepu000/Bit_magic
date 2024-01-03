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
    for ( int i = 0 ;i < n;i++){
        cin >> v[i];
    }
    int ans = 1;
    for(int i = 0; i<= 31 ;i++){
        int ocount = 0;
        for(int j = 0 ;j < n;j++){
            if(( v[j] & (1 << i)) > 0){
                ocount++;
            }
        }
        if (ocount % 3 !=0 ) {
            ans = ans | ( 1 << i );
        }
    }
    

    cout << ans << " ";

}