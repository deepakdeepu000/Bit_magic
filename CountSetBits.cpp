#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>

using namespace std;


int nearest2Power(int n){
    int c = 0;
    while((1 << c) <= n){
        c++;
    }
    return c-1;
}

int countSetBits(int n){
    if ( n == 0 ) return 0;

    
    int x = nearest2Power(n);

    int ans = x * (1 << (x-1)) + ( n - (1 << x )) + 1 + countSetBits(n - (1 << x ));

    return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

  /*int total_bits = 0;
   for(int i = 1 ;i <= n; i++){
        total_bits += __builtin_popcount(i);
   }
    cout  << total_bits;*/ 
    int n;
    cin >> n;
    cout << countSetBits(n);
}