#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    sort(all(a));
    int i = 1, j = n - 2;
    if ((a[0] + a[n - 1]) % 2 == 0)
        cout << 0 << endl;
    else
    {
        while (a[0] % 2 == a[i] % 2 && i < n - 1)
            i++;
        while (a[n - 1] % 2 == a[j] % 2 && j > 0)
            j--;
        cout << min(i, n - j - 1) << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
        solve();
}