#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int> s;
    cout<<s.size()<<" "<<s.empty()<<"\n";
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<" "<<s.empty()<<"\n";
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}
