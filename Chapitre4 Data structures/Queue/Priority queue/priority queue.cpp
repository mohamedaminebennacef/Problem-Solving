#include <bits/stdc++.h>
using namespace std;
// called min heap or max heap
// nsta3mloha ki nst7a9ou bch nfas5ou akber wela as5ar element(mech mel wost) 
// retrieval and removal of either the minimum or maximum element. the largest element can be accessed and removed first.
// elements in a C++ priority queue are sorted in decreasing order
// FIFO
// adding an element to the end 
// removing the first element in the queue. 
int main() {
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout << q.top() << "\n"; // 7
    q.pop();
    cout << q.top() << "\n"; // 5
    q.pop();
    q.push(6);
    cout << q.top() << "\n"; // 6
    q.pop();

    return 0;
}   