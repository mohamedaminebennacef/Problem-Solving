#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define ll long long
#define S second


void subsequence(const string& s, string current, int index) {
    // Base case: if we reach the end of the string
    if (index == s.length()) {
        cout << current << " "; // Print the current subsequence
        return;
    }
    subsequence(s, current + s[index], index + 1); // Include the current character
    subsequence(s, current, index + 1); // Exclude the current character
}

void solve() {
    string s="ABC";
    subsequence(s,"",0);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}