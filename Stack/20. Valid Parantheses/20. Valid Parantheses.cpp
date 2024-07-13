#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false):cin.tie(NULL):cout.tie(NULL);
#define newL cout<<"\n";
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        string open="([{";
        string close="}])";
        for(int i=0;i<s.length();i++) {
            if (st.empty()) {
                if (close.find(s[i])!=string::npos) 
                    return false;
                else 
                    st.push(s[i]);
            }
            else { 
                if (close.find(s[i])!=string::npos) {
                    if (( s[i]==')' && st.top()!='(' ) || (s[i]=='}' && st.top()!='{') || (s[i]==']' && st.top()!='[') ) 
                        return false;
                    else
                        st.pop();
                } 
                else 
                    st.push(s[i]);
            }
        }
        return st.empty();
    }
};
int main() {
    Solution solution;
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        cout<<solution.isValid(s);  
        newL;     
    }
    //cout<<ans<<endl; 
    return 0;
}
