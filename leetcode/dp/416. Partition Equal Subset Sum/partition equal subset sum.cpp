#include <bits/stdc++.h>
using namespace std;

int arr[] = {1,5,5,11};
int total;

int somme(int n,int arr[]) {
    int sum = 0;
    for(int i=0;i<n;++i) {
        sum+=arr[i];
    }
    return sum;
}
// bool f(int n,int s) {
//     if (s == total/2) 
//         return true;
//     if (n==0 || s>total/2)
//         return false;
//     return f(n-1,s+arr[n-1])|| f(n-1,s);
// }


bool f(int n,int s) {
    if (n  == 0) {
        if (s == total/2)
            return true;
        else
            return false;
    }
    else
    {
        if (s-arr[n-1]>=total/2) 
            return f(n-1,s) + f(n-1,s-arr[n-1]);
        else 
            return f(n-1,s);
    }
}

int main() {
    int n = sizeof(arr)/sizeof(arr[0]);
    total = somme(n,arr);
    if (total%2 != 0)
        cout << "can't partition if the total sum is odd";
    else {
        cout << f(n,0);
    }
    return 0;
}