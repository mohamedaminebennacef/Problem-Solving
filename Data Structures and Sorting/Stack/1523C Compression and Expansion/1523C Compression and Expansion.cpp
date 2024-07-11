#include <bits/stdc++.h>
using namespace std;
int t,n,a;
int main() {
    freopen("input.txt","r",stdin);
    cin>>t;
    while(t--) {
        cin>>n;
        stack<int> s;
        while(n--) {
            cin>>a;
            if(a==1) 
                s.push(a);
            else {
                int top = s.top();
                while (top+1 != a) {
                    s.pop();
                    top=s.top();
                }
                s.pop();
                s.push(a);
            }
            // printing the content of the stack
            vector<int> ans;
            stack<int> copy=s;
            while(!copy.empty()) {
                ans.push_back(copy.top());
                copy.pop();
            }
            reverse(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++){
                cout<<ans[i];
                if(i<ans.size()-1)
                    cout<<".";
            }
            cout<<"\n";
        }
       
    }
    //cout<<ans<<endl; 
    return 0;
}