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

int fair(int n)
{
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0')
        {
            if (n % (s[i] - 48) != 0)
                return 0;
        }
    }
    return 1;
}

void solve(int tc)
{
    int n;
    cin >> n;
    int i = n;
    while (true)
    {
        if (fair(i))
        {
            cout << i << endl;
            break;
        }
        i++;
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
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}