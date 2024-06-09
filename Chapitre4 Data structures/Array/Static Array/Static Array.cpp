#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[] = {8,5,15,10};
    sort(arr,arr+4);
    for(auto v:arr)
        cout << v <<" ";
    cout << endl;
    if (binary_search(arr,arr+4,0))
        cout << "exist";
    else
        cout << "doesn't exist";

    return 0;
}