#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
#define endl "\n"
int xorr[300000];

bool multi = true;

void solve(int tc)
{
    int a, b;
    cin >> a >> b;

    int x = xorr[a - 1];
    if (x == b)
    cout << a << endl;
    else {
        if ((x ^ b) != a)
        cout << a + 1 << endl;
        else 
        cout << a + 2 << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    memset(xorr, 0, sizeof(xorr));
    for (int i = 1; i < 300000; i++)
        xorr[i] = xorr[i - 1] ^ i;
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}