/*
YES if it is possible to reorder the string so there is no palindrome substring
*/
#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false):cin.tie(NULL):cout.tie(NULL)
#define newL cout<<"\n"
#define ll long long
#define pb push_back
#define f first
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<< (n==1 or (s[0]!=s[1] and n==2) ? "YES" : "NO") << '\n';
    }
    return 0;
}
