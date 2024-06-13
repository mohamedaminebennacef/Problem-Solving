#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n=5,k=4,res=0;vector<string> v = {"sett","test","eeet","este","stes"};
    int n,k,res=0;
    cin>>n>>k;
    vector<string> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int x=j+1;x<n;x++) {
                bool cut=false;string s1=v[i];string s2=v[j];string s3=v[x];                
                for(int a=0;a<k;a++){
                    if ( s1[a]==s2[a] && s1[a]!=s3[a] || s1[a]==s3[a] && s1[a]!=s2[a] || s2[a]==s3[a] && s1[a]!=s2[a] ){
                        cut=true;
                        break;
                    }
                }
                if(!cut) {
                    res++;
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
