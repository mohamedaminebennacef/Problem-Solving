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

bool multi = true;

set<string> substring(string s)
{
    set<string> st;
    string sub = "";
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            sub += s[j];
            st.insert(sub);
        }
        sub = "";
    }
    return st;
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    set<string> st1, st2;

    if (s1.length() > s2.length())
        st1 = substring(s1), st2 = substring(s2);
    else
        st1 = substring(s2), st2 = substring(s1);

    int mx = 0;
    for (string e : st1)
    {
        if (st2.find(e) != st2.end())
            mx = max(mx,(int)e.length());
    }
    cout << s1.length() + s2.length() - 2 * mx << endl;
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
    while (t--)
        solve();
    return 0;
}