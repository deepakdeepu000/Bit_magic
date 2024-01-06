#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // brute force approch
    /*int a;
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
    cout << sum ;*/

    // sum of xor of array elments using bit manipulation
    long res = 0; // Initialize the res variable

    for (int i = 0; i < 32; i++) {
        long zero_count = 0, one_count = 0; // Initialize counts of zeros and ones for each bit position
        for (int j = 0; j < n; j++) {
            // Checking if the i-th bit is set in arr[j]
            if ((arr[j] & (1 << i)) != 0) {
                one_count++; // Increment the count of set bits
            } else {
                zero_count++; // Increment the count of unset bits
            }
        }
        
        // Add the contribution of the current bit position to the final result
        res += (one_count*zero_count*pow(2, i));
    }
    cout << res; // Output the result
}
