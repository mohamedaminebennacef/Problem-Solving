#include <bits/stdc++.h>
using namespace std;
int main() {
    
    // static array
    int a[] = {7,0,1,9,8,5};
    int n= sizeof(a)/sizeof(a[1]);
    // sorting order is increasing
    sort(a,a+n,less<int>()); // par defaut
    cout<<"a increasing : ";
    for(auto v:a) cout<<v<<" ";
    cout<<"\n";
    
    // sorting order is decreasing
    cout<<"a decreasing : ";
    sort(a,a+n,greater<int>());
    for(auto v:a) cout<<v<<" ";
    cout<<"\n";
    
    // dynamic array
    vector<int> v = {7,0,1,9,8,5};
    // printing v in reverse order
    cout<<"v reverse order : ";
    for(auto rit=v.rbegin();rit!=v.rend();++rit) cout<<*rit<<" ";
    cout<<"\n";
    
    // sorting order is decreasing
    // rbegin() the last element of the container {7,0,1,9,8,5} => 5
    // rend() the theoretical element preceding the first element of the container -> . {7,0,1,9,8,5} 
    sort(v.rbegin(),v.rend());
    sort(v.rbegin(),v.rend());
    cout<<"v increasing : ";
    for(auto it=v.begin();it!=v.end();++it) cout<<*it<<" ";
    cout<<"\n";

    
    return 0;
}