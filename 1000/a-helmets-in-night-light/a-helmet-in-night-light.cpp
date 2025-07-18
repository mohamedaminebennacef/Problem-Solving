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
#define int long long
#define endl "\n"
int a[500005];

bool multi = true;

void solve(int tc)
{
    int n, p;
    cin >> n >> p;
    auto compare = [&](pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.S == p2.S)
            return p1.F > p2.F;
        return p1.S < p2.S;
    };
    vector<pair<int, int>> rc(n);
    for (int i = 0; i < n; i++)
    {
        int nbr;
        cin >> nbr;
        rc[i].F = nbr;
    }
    for (int i = 0; i < n; i++)
    {
        int cost;
        cin >> cost;
        rc[i].second = cost;
    }
    if (tc == 251)
    {
        cout << n << ":" << p;
        for (int i = 0; i < n; i++)
            cout << rc[i].F << "," << rc[i].S << ";";
    }
    sort(all(rc), compare);
    if (n == 1)
    {
        cout << p << endl;
        return;
    }
    if (p < rc[0].S)
    {
        cout << n * p << endl;
        return;
    }
    int cost = p, residants = 1;
    int i = 0;
    while (residants != n)
    {
        if (residants + rc[i].F <= n)
        {
            residants += rc[i].F;
            cost += rc[i].S * rc[i].F;
        }
        else
        {
            cost += rc[i].S * (n - residants);
            residants += n - residants;
        }
        i++;
        if (rc[i].S >= p)
        {

            cost += p * (n - residants);
            break;
        }
    }
    cout << cost << endl;
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