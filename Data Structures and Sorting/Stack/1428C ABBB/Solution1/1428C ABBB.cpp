#include <bits/stdc++.h>
using namespace std;
int t,n;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    string s;
    while(t--) {
        cin>>s;
        int p;
        p=s.find("AB");
        while (p != string::npos) {
            s.erase(p,2);
            p=s.find("AB");
        }
        p=s.find("BB");
        while (p != string::npos) {
            s.erase(p,2);
            p=s.find("BB");
        }
        cout<<s.length()<<"\n";
    }
    /*
    3
    2
    0
    */
    return 0;
}