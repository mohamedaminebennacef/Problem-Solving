/*
te7sb number les indices i wa9tli tna7i el caractere eli fel indice i yo93od palindrome
*/
#include <bits/stdc++.h>
using namespace std;
int t,n;
bool palindrome(string s) {
    // int i=0,l=s.length()-1;
    // while (i<(l/2)+1) {
    //     if (s[i]!=s[l-i])
    //         break;
    //     i++;
    // }
    // return i==(l/2)+1;
    string orig=s;
    reverse(s.begin(),s.end());
    return orig==s;
}
int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    string s;
    while(t--) {
        cin>>n;
        cin>>s;
        string tmp=s;
        int ans=0;
        for(int i=0;i<n;i++) {
            if (palindrome(tmp.erase(i,1))) ans++;
            tmp=s;
        }
        cout<<ans<<endl; 
    }
    /*
    1
    4
    2
    */
    return 0;
}