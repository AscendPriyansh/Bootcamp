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
    Return the vertical order traversal: one list per column, from the
    leftmost column to the rightmost.
*/
void heightOfTree(TreeNode *root, int &minCol, int &maxCol, int col)
{
    if (root == nullptr)
    {
        return;
    }

    minCol = min(minCol, col);
    maxCol = max(maxCol, col);

    heightOfTree(root->left, minCol, maxCol, col - 1);
    heightOfTree(root->right, minCol, maxCol, col + 1);
}

vector<vector<int>> verticalTraversal(TreeNode *root)
{
    if (root == nullptr)
        return {};

    int minCol = INT_MAX;
    int maxCol = INT_MIN;
    int col = 0;
    heightOfTree(root, minCol, maxCol, col);

    int totalCols = maxCol - minCol + 1;
    vector<vector<int>> v(totalCols);

    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        int n = q.size();
        int let = 0;

        map<int, vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            TreeNode *store = q.front().first;
            int cols = q.front().second;
            q.pop();

            let = cols - minCol;
            ans[let].push_back(store->val);

            if (store->left)
                q.push({store->left, cols - 1});
            if (store->right)
                q.push({store->right, cols + 1});
        }

        for (auto [val, arr] : ans)
        {
            sort(arr.begin(), arr.end());
            for (auto it : arr)
            {
                v[val].push_back(it);
            }
        }
    }

    return v;
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

    TreeNode *root = buildTree(nodes);

    vector<vector<int>> ans = verticalTraversal(root);

    for (auto &col : ans)
    {
        for (int i = 0; i < (int)col.size(); i++)
        {
            if (i)
                cout << " ";
            cout << col[i];
        }
        cout << '\n';
    }

    return 0;
}