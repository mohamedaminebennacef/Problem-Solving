#include <bits/stdc++.h>
using namespace std;
// top = min,max element
// called min heap or max heap
// nsta3mloha ki nst7a9ou bch nfas5ou akber wela as5ar element(mech mel wost) 
// retrieval and removal of either the minimum or maximum element. the largest element can be accessed and removed first.
// elements in a C++ priority queue are sorted in decreasing order
// FIFO
// adding an element to the end 
// removing the first element in the queue. 
// By default, a priority queue in C++ is a max-heap, meaning the largest element is at the top. However, by using greater<int>, you're changing the priority queue to a min-heap, meaning the smallest element will be at the top
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

    // Access and print the elements in the priority queue
    // Since it is a min-heap, the smallest element will be on top
    cout << "printing priority queue element ";
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}   