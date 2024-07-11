
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v={0,0};
    int n=v.size();
    int l=1,r=n-1,j=1,maxl=INT_MIN;
    while(j<n) {
        int ls=0;
        int d=j;
        while (v[j] == 0 && j<n) {
            j++;
            ls++;
        }
        if (ls>maxl) {
            maxl=ls;
            l=d;
            r=j-1;
            cout<<"["<<l<<","<<r<<"] ";
        }
        j++;
    }
    return 0;
}
