#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define ll long long
#define S second

// long long n,a[200005],q,sum=0,pref[200005],t;
bool compare(string s,string s2) {
    return s.length()<s2.length();
}
void solve() {
    string s="ABCDE";
    vector<string> v;
    int n=s.length();
    for(int i=0;i<n;i++) {
        string sub="";
        for(int j=i;j<n;j++) {
            sub+=s[j];
            v.push_back(sub);
        }
    }
    cout<<v.size()<<endl;
    sort(all(v),compare);
    for(auto e:v) cout<<e<<" ";
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