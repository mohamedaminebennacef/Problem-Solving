#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    for(int i=0;i<k;i++)
        cout<<"1";
    for(int i=0;i<n-k;i++) 
        cout<<"0";
    cout<<endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
        solve();
}