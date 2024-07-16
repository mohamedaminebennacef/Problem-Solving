#include <bits/stdc++.h>
using namespace std;
// File
// FIFO
// adding an element to the end O(1)
// removing the first element in the queue. O(1)
// It is only possible to access the first and last element of a queue.
int main() {
    queue<int> q;
    q.push(3); // First element
    q.push(2); // adding to the end
    q.push(5);
    // 3 2 5
    cout << q.front() << endl; // 3
    q.pop(); // Removing the first element 3 => q = 2 5
    cout << q.front(); // 2

    return 0;
}