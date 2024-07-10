#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> logs = {"d1/","d2/","./","d3/","../","d31/"};
                        // = {"d1","d1/d2","d1/d2","d1/d2/d3","d1/d2","d1/d2/d31"} => ../ (d2) ../ (d1) ../ (Main)
    int n=logs.size();
    int ans=0;
    for(int i=0;i<n;i++){
        if(logs[i] == "../") {
            if (ans>0)
                ans--;
        }
        else if (logs[i] == "./")
            continue;
        else {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
