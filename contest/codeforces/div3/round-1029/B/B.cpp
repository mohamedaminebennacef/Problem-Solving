#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> res(n);
    int i = 0;
    int a = 0;
    int c = n - 1;
    while (i != n)
    {
        i++;
        if (a % 2 == 0)
        {
            res[a] = i;
            a++;
        }
        else
        {
            res[c] = i;
            c--;
        }
    }
    for (auto i : res)
        cout << i << " ";
    cout << endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}