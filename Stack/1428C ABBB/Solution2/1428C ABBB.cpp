#include <bits/stdc++.h>
using namespace std;
int t,n;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    string s;
    while(t--) {
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++) {
            if (st.empty())  
                st.push(s[i]);
            else {
                if (s[i] == 'A') 
                    st.push(s[i]);
                else
                    st.pop();
            }     
        }
        cout<<st.size()<<"\n";
    }
    /*
    3
    2
    0
    */
    return 0;
}