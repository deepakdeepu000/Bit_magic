#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int arr[] = {7,1,5,2,3,9};
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        int b = arr[l]&arr[l+1];
        if((l-r) >=2){
            for(int i = l+2;i <= r; i++){
                b &= arr[i];
            }
        }
        cout << b << endl;  
    }
    
    
}