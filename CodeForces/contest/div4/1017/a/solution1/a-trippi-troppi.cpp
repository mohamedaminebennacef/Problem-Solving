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

void solve(int tc)
{
    string s;
    getline(cin, s);
    string tmp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' && tmp != "")
        {
            cout << tmp[0];
            tmp = "";
        }
    }
    cout << tmp[0];
}

bool multi = true;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    if (multi)
        cin >> t;
    cin.ignore(); // ✅ ignore leftover newline
    for (int i = 1; i <= t; ++i)
    {
        solve(i);
        cout << endl;
    }
    return 0;
}