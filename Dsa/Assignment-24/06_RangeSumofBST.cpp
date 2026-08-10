#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

TreeNode *buildTree(const vector<string> &nodes)
{
    if (nodes.empty() || nodes[0] == "null")
        return nullptr;

    TreeNode *root = new TreeNode(stoi(nodes[0]));
    queue<TreeNode *> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < (int)nodes.size())
    {
        TreeNode *cur = q.front();
        q.pop();

        if (nodes[i] != "null")
        {
            cur->left = new TreeNode(stoi(nodes[i]));
            q.push(cur->left);
        }
        i++;

        if (i < (int)nodes.size() && nodes[i] != "null")
        {
            cur->right = new TreeNode(stoi(nodes[i]));
            q.push(cur->right);
        }
        i++;
    }
    return root;
}

/*
    Implement only the function below.
    Return the sum of the values of all nodes whose value is inside the
    inclusive range [low, high].
*/
void inorder(TreeNode *root, int low, int high, long long &sum)
{
    if (root == nullptr)
        return;

    if (root->left)
        inorder(root->left, low, high, sum);
    if (root->val >= low && root->val <= high)
    {
        sum += root->val;
    }
    if (root->right)
        inorder(root->right, low, high, sum);
}

long long rangeSumBST(TreeNode *root, int low, int high)
{
    long long sum = 0;

    inorder(root, low, high, sum);

    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> nodes(n);
    for (int i = 0; i < n; i++)
        cin >> nodes[i];

    int low, high;
    cin >> low >> high;

    TreeNode *root = buildTree(nodes);

    cout << rangeSumBST(root, low, high) << '\n';

    return 0;
}