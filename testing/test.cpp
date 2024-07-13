#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& v,int n,int m) {
    if (n<0) 
        return m;
    if (m<v[n])
        return f(v,n-1,v[n]);
    else    
        return f(v,n-1,m);
}

int main() {
    int m=INT_MIN;
    vector<int> v = {2,4,-1,0,9,-1,-1000};
    int n=v.size();
    int x=f(v,n-1,m);
    cout<<x;
    return 0;
}
