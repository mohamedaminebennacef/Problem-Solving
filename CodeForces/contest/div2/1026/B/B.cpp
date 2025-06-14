    #include <bits/stdc++.h>
    using namespace std;

    void solve()
    {
        string s;
        cin >> s;
        int n = s.size();
        int bal = 0;
        for (int i = 1; i + 1 < n; i++)
        {
            if (s[i] == '(')
                bal++;
            else
                bal--;
            if (bal < 0)
            {
                cout << "YES\n";
                return;
            }
        }
        if (bal == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
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