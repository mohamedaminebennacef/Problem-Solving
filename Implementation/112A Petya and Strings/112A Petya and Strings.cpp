#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,s1;
    cin>>s>>s1;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    if(s>s1)
        cout<<'1';
    else if(s<s1)
        cout<<"-1";
    else 
        cout<<'0';
}