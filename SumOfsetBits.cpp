#include<bits/stdc++.h>
using namespace std;
int SetBit(int n)
{
    int t=(int)log2(n)+1;
    int c=0;
    for(int i=0;i<t;i++)
    {   

        int mask = (1 << i);
        if(( n & mask) > 0){
            c++;
        }
    }
    return c;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        int s=0;
        for(int i=1;i<=a;i++)
        {
            s+=SetBit(i);
        }
       cout<<s% 1000000007 <<endl;
    }
    cout<<endl;
}