#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isSorted(vector<int> &vec) {
    if (vec.size()<2)
        return true;
    for(size_t i=0;i<vec.size()-1;i++){
        if (vec[i]>vec[i+1])
            return false;
    }
    return true;
}
void rotation(vector<int>& vec,int k) {
    int n=vec.size();
    k = k%n ;// handle cases where k>n
    if (k<0)
        k +=n;
    vector<int> temp(vec.begin()+n-k,vec.end());
    vec.erase(vec.begin()+n-k,vec.end());
    vec.insert(vec.begin(),temp.begin(),temp.end());
}
int main() {    
    vector<int> a = {7,9,2,2,3};
    int n=5;
    bool ok=false;
    for(int i=0;i<n;i++) {
        ok |= is_sorted(a.begin(),a.end()); // if the vector is found to be sorted in any rotation
        rotate(a.begin(),a.begin()+1,a.end()); // rotates the vector a by 1 position to the left.
        // ok |= isSorted(a);
        // rotation(a,1);
    }
    cout<<(ok ? "YES" : "NO")<<"\n";
    return 0;
}
