/*
 Task : calculate the number of such pairs (i,j) that i<j and ai&aj ≥ ai⊕aj
*/

#include <bits/stdc++.h>
using namespace std;
int t,n;

/*
Solution1 
    - Time Complexity O(t∗n^2) 1≤t≤10 1≤n≤10^5   10*10^10 = 10^11 -
*/

int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int nb=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++) {
                if ((a[i]&a[j]) >= (a[i]^a[j]))
                    nb++;
            }
        }
        cout<<nb<<"\n";
    }
    return 0;
}

