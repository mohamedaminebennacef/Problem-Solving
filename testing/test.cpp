#include <bits/stdc++.h>
using namespace std;
 

void rotate(vector<int>& vec,int k) {
    int n=vec.size();
    k = k%n ;// handle cases where k>n
    if (k<0)
        k +=n;
    vector<int> temp(vec.begin()+n-k,vec.end());
    vec.erase(vec.begin()+n-k,vec.end());
    vec.insert(vec.begin(),temp.begin(),temp.end());
}


int main()
{
    int k = 2;
    vector<int> v = {7,9,2,2,3};
    for(int num:v) cout<<num<<" ";
    cout<<"\n";
    rotate(v,k);
    for(int num:v) cout<<num<<" ";
}