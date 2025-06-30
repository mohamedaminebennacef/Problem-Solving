#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
#define endl "\n"
int a[500005];

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* rr = new TreeNode(3,nullptr,nullptr);  
TreeNode* rlr = new TreeNode(5,nullptr,nullptr);
TreeNode* lr = new TreeNode(2,nullptr,rlr);
TreeNode* root = new TreeNode(1,lr,rr);

void rootToLeaf(TreeNode *root, vector<string> &res, const string &rootpath)
{
    if (root->left == nullptr && root->right == nullptr)
    {
        res.push_back(rootpath);
    }
    else
    {
        if (root->left != nullptr)
            rootToLeaf(root->left, res, rootpath + "->" + to_string(root->left->val));
        if (root->right != nullptr)
            rootToLeaf(root->right, res, rootpath + "->" + to_string(root->right->val));
    }
}
vector<string> binaryTreePaths(TreeNode *root)
{
    vector<string> res;
    string rootpath = to_string(root->val);
    rootToLeaf(root, res, rootpath);
    return res;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> res = binaryTreePaths(root);
    for (string s:res)
        cout << s << endl;
    return 0;
}