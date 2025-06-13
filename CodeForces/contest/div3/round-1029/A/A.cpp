#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int fpos1 = find(a.begin(),a.end(),1)-a.begin(),fpos2=-1;
    if (fpos1 == n) {
        cout<<"YES\n";
        return;
    }
    for(int i=n-1;i>=0;i--) {
        if (a[i]==1) {
            fpos2=i;
            break;
        }
    }
    if (fpos2 == -1) {
        if (x == 1) {
            cout<<"YES\n";
            return;
        }
    }
    if (fpos2-fpos1>=x)
        cout<<"NO\n";
    else    
        cout<<"YES\n";
}

int main()
{
    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}