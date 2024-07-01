#include <bits/stdc++.h>
using namespace std;
int t;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    while(t--) {
       string s;
    //    cin>>s;
    s="z";
       int flag=true;
       int p=s.find('a'),i=1;
       int prev=p-1,next=p+1;
       while(i<s.length()) {
          char c='a'+i;
          if (s[prev]==c) 
              prev--;
          else if (s[next]==c) 
              next++;
          else {
            flag=false;
            break;
          }
          i++;
       }
       if ((prev==-1 || next==s.length()) && flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    /*
    YES
    YES
    YES
    YES
    YES
    NO
    NO **
    NO
    NO
    NO
    NO
    */
    return 0;
}