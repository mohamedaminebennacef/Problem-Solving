#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
        cin >> n;
        vector<int> d(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> d[i];
        for (int i = 0; i < n - 1; i++)
        {
            int s = d[i];
            for (int j = i + 1; j < n; j++)
            {
                cout << s << " ";
                s += d[j];
            }
            cout << endl;
        }
  return 0;
}