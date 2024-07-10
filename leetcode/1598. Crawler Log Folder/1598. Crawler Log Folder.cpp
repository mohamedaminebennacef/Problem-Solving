#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n=logs.size();
        int ans=0; // keep track of how many operations we are away from the main directory
        for(int i=0;i<n;i++){
            if(logs[i] == "../") {
                // if (ans>0)
                //     ans--;
                ans=max(0,ans-1); //cleaner way for doing it
            }
            else if (logs[i] == "./")
                continue;
            else {
                ans++;
            }
        }
        return ans;
    }
};
int main() {
    vector<string> logs = {"d1/","d2/","../","d21/","./"};
    Solution s;
    cout << s.minOperations(logs);
    return 0;
}