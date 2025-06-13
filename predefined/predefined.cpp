#include <bits/stdc++.h>
using namespace std;


// print a matrix of pair element
void print(vector<vector<pair<int, int>>> adj)
{
    for (int i = 0; i < adj.size(); i++)
    {
        cout << i << ":{";
        for (int j = 0; j < adj[i].size(); j++)
        {
            if (j != adj[i].size() - 1)
                cout << "{" << adj[i][j].first << "," << adj[i][j].second << "},";
            else
                cout << "{" << adj[i][j].first << "," << adj[i][j].second << "}";
        }
        cout << "}\n";
    }
}