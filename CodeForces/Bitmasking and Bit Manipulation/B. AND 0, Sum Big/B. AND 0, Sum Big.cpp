#include <iostream>
using namespace std;
const int modulo = 1e9 + 7;
int t, n, k;
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> k;
        // cout << mod_exp(n, k, modulo) << "\n";
        long long power=1;
        for(int i=0;i<k;i++){
            power*=n;
            power%=modulo;
        }
        cout<<power<<"\n";
    }
    return 0;
}