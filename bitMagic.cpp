#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>

using namespace std;

void printBinary(int a){
    for(int i = 32 ;i >=0 ;i++){
        int mask = 1 << i;
        if ((a & mask) > 0) cout << 1;
        else cout << 0;
    }
}

int MSB(int a){
    for (int i = 31 ; i >= 0; i--){
    int mask = 1 << i;
    if ((a & mask) > 0) return i;
    }
}

int LSB(int a){
    for (int i = 0 ; i <= 31; i++){
        int mask = 1 << i;
        if ((a & mask) > 0) return i;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a = 11;
    printBinary(a);
    cout << MSB(a) << endl;
    int b = ceil(log2(a));
    int Least2Power = ( 1 << ( b-1));
    cout << Least2Power << endl;
    int next2Power = (1 << b);
    cout << next2Power << endl;
    int c = ceil(log10(a));
    cout << c << endl;

}