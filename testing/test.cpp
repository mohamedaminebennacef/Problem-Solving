#include <bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<pair<int,int>> pq;
    pq.push({1,2});
    pq.push({3,4});
    pq.push({5,6});
    while (!pq.empty()) {
        pair<int,int> topElement = pq.top();
        cout << topElement.first;
        cout << topElement.second;
        pq.pop();
    }
    cout << "test";
    return 0;
}