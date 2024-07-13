#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.length();
        deque<char> d;
        d.push_back(num[0]);
        int i=1;
        while (k!=0 && i<n) {
            while (!d.empty() && d.back()>num[i]) {
                d.pop_back();
                k--;
                if (k==0) {
                    break;
                }
            }
            d.push_back(num[i]);
            i++;
        }
        for(int j=i;j<n;j++) {
            d.push_back(num[j]);
        }
        while(k!=0) {
            d.pop_back();
            k--;
        }
        while(!d.empty() && d.front()=='0')
            d.pop_front();
        string ans="";
        while (!d.empty()) {
            ans+=d.front();
            d.pop_front();
        }
        if (ans!="") 
            return ans;
        return "0";
    }
};
int main() {
    int k=1;
    string num = "10200";
    Solution solution;
    string ans=solution.removeKdigits(num,k);
    cout<<ans;
    return 0;
}