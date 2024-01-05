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
    // Create a vector to store n integers
    vector<int> v(n);
    for ( int i = 0 ;i < n;i++){
        cin >> v[i];
    }
    int ans = 1;

    // Iterate through each bit position (0 to 31)
    for(int i = 0; i<= 31 ;i++){
        
        int ocount = 0;         // Initialize count of set bits at the current position

        // Counting the number of set bits at the i th position for all elements in the vector
        for(int j = 0 ;j < n;j++){
            if(( v[j] & (1 << i)) > 0){
                ocount++;   //increment the set bits count
            }
        }
        
         // If the count of set bits is not a multiple of 3, set the corresponding bit in the result
        if (ocount % 3 !=0 ) {
            ans = ans | ( 1 << i );
        }
    }
    

    cout << ans << " ";

}
