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

void solve(int tc)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> stk;
    char top;
    for (int i = 0; i < n; i++) {
        if (!stk.empty())
            top = stk.top();
        if (s[i] == ')' && top == '(') {
            top = '\0';
            stk.pop();
        }
        else
            stk.emplace(s[i]);
    }
    cout << stk.size() / 2 << endl;
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