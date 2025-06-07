#include <bits/stdc++.h>
using namespace std;

bool closeStrings(string w1,string w2) {
        vector<int> f1(26,0),f2(26,0);
        for(int i=0;i<w1.length();i++) {
            f1[w1[i]-'a']++;
            f2[w2[i]-'a']++;
        }
        for(int i=0;i<26;i++) {
            if (f1[i]>0 && f2[i]==0)
                return false;
            if (f2[i]>0 && f1[i]==0)
                return false;
        }
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        for(int i=0;i<25;i++) {
            if (f1[i] != f2[i]) 
                return false;
        }
        return true;
    }

int main() {
    string w1 = "a",w2="aa";
    cout<<closeStrings(w1,w2)<<endl;
}