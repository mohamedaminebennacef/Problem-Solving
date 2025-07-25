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
// int a[500005];
#define int long long

bool multi = true;
vector<int> res;

void solve(int tc)
{
    int a, b;
    cin >> a >> b;
    int x = 0, y = 0;
    while (a % 2 == 0 && a > 0) {
        x++;
        a /= 2;
    }
    
    while (b % 2 == 0 && b > 0) {
        y++;
        b /= 2;
    }
    if (b != a)
        cout << -1 << endl;
    else 
        cout << ((abs(x - y) + 2) / 3) << endl;
    
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
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}