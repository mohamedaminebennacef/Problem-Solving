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

unordered_map<string, vector<pair<string, double>>> g;
unordered_map<string, int> visited;

void dfs(pair<string, double> start, pair<string, double> end, double &mult)
{
    if (visited.find(start.F) != visited.end())
        return;
    visited[start.F] = 1;
    for (auto u : g[start.F])
    {
        if (u.F == end.F)
            return;
        cout<<u.S<<endl;
        mult *= u.S;
        dfs(u, end, mult);
    }
}

vector<double> calcEquation(vector<vector<string>> &eq, vector<double> &v, vector<vector<string>> &q)
{
    set<string> s;
    for (int i = 0; i < eq.size(); i++)
        for (int j = 0; j < 2; j++)
            s.insert(eq[i][j]);

    int n = s.size();
    int qu = q.size();

    for (int i = 0; i < eq.size(); i++)
    {
        g[eq[i][0]].pb({eq[i][1], v[i]});
        g[eq[i][1]].pb({eq[i][0], 1 / v[i]});
    }

    vector<double> ans;

    for (int i = 0; i < qu; i++)
    {
        if (s.find(q[i][0]) == s.end() || s.find(q[i][1]) == s.end())
            ans.pb(-1);
        else
        {
            double mul = 1;
            pair<string, double> start = {q[i][0], 0}, end = {q[i][1], 0};
            dfs(start, end, mul);
            ans.pb(mul);
        }
    }
    return ans;
}

void solve(int tc)
{
    int n, qu;
    cin >> n >> qu;
    vector<vector<string>> eq(n, vector<string>(2));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> eq[i][j];
    vector<double> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<string>> q(qu, vector<string>(2));
    for (int i = 0; i < qu; i++)
        for (int j = 0; j < 2; j++)
            cin >> q[i][j];
    vector<double> ans = calcEquation(eq, v, q);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}

bool multi = true;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        solve(i);
    }
    return 0;
}