#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sz(a) int(a.size())
#define f first
#define s second
#define pii pair<int, int>
#define vi vector<int>

int cnt = 0;
void dfs(int node, int parent, vector<vector<pair<int, int>>> &adj)
{
    for (auto &[neighbor, sign] : adj[node])
    {
        if (neighbor != parent)
        {
            cnt += sign;
            dfs(neighbor, node, adj);
        }
    }
}

int minReorder(int n, vector<vector<int>> &connections)
{
    vector<vector<pair<int, int>>> adj(n);
    for (auto &connection : connections)
    {
        adj[connection[0]].push_back({connection[1], 1});
        adj[connection[1]].push_back({connection[0], 0});
    }
    dfs(0, -1, adj);
    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    vector<vi> c(n, vi(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> c[i][j];
    }
    cout << minReorder(n, c) << endl;
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