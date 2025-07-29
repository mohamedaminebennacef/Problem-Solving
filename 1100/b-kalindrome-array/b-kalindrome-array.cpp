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

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> a1, a2;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] != a[j])
            break;
        else
        {
            i++;
            j--;
        }
    }
    if (i > j)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        for (int x = 0; x < n; x++)
        {
            if (a[x] != a[i])
                a1.push_back(a[x]);
            if (a[x] != a[j])
                a2.push_back(a[x]);
        }
    }
    bool first = true, second = true;
    i = 0, j = a1.size() - 1;
    while (i < j)
    {
        if (a1[i] != a1[j])
        {
            first = false;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    i = 0, j = a2.size() - 1;
    while (i < j)
    {
        if (a2[i] != a2[j])
        {
            second = false;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";
    cout << endl;
    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";
    cout << endl;
    cout << ((first || second) ? "YES" : "NO") << endl;
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