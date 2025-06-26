#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n, q, x, s = 0;
    cin >> n >> q;
    // for convenience we will add one square to each end (square 0 and square N+1) painted white
    vector<int> a(n + 1);
    for (int i = 0; i < q; i++)
    {

        cin >> x;
        s += (1 - a[x - 1]) - a[x - 1];
        s += (1 - a[x]) - a[x];
        a[x] = 1 - a[x];
        a[x - 1] = 1 - a[x - 1];
        cout << (s/2) << endl;
    }

    return 0;
}