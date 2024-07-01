#include <bits/stdc++.h>
using namespace std;
int t,n;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    while(t--) {
       string s;
       cin>>s;
       string s2="a";
       int i=1;
       while(i<s.length()) {
         if (s.find(char('a'+i)) != string::npos) {
           if (s.find(s2+char('a'+i)) != string::npos)
               s2+=char('a'+i);
            else
               s2=char('a'+i)+s2;
         }
         else 
            break;
         i++;
       }
       cout<<(s==s2?"YES":"NO")<<"\n";

    }
    return 0;
}