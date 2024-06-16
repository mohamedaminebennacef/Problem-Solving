#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,p,v,t,np=0;
    cin>>n;
    while(n--){
        cin>>p>>v>>t;
        // if((p==1 && v==1) || (p==1 && t==1) || (t==1 && v==1) || (p==1 && v==1 && t==1))
        if (p+v+t>=2)
            np++;
    }
    cout<<np<<endl;
}