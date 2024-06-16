#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    char mat[100][100];
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>mat[i][j];
    int i=0;
    bool bw=true;
    while (i<n && bw) {
        int j=0;
        while (j<m && bw) {
            if (mat[i][j] == 'C' || mat[i][j] == 'M' || mat[i][j] == 'Y') 
                bw=false;
            j++;
        }
        i++;
    }
    cout<<(bw?"#Black&White":"#Color")<<"\n";
    return 0;
}