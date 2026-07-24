#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(const vector<string>& nodes) {
    if (nodes.empty() || nodes[0] == "null") return nullptr;

    TreeNode* root = new TreeNode(stoi(nodes[0]));
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < (int)nodes.size()) {
        TreeNode* cur = q.front();
        q.pop();

        if (nodes[i] != "null") {
            cur->left = new TreeNode(stoi(nodes[i]));
            q.push(cur->left);
        }
        i++;

        if (i < (int)nodes.size() && nodes[i] != "null") {
            cur->right = new TreeNode(stoi(nodes[i]));
            q.push(cur->right);
        }
        i++;
    }
    return root;
}

/*
    Implement only the function below.
    Return the top view of the binary tree (left to right).
*/
void height(TreeNode* root, int& minCol, int& maxCol, int col) {
    if(root==nullptr) return;

    minCol = min(minCol, col);
    maxCol = max(maxCol, col);

    height(root->left, minCol, maxCol, col-1);
    height(root->right, minCol, maxCol, col+1);
}

vector<int> topView(TreeNode* root) {
    if(root==nullptr) return {};

    int minCol = INT_MAX;
    int maxCol = INT_MIN;
    int col=0;

    height(root, minCol, maxCol, col);
    int totalCols = maxCol - minCol + 1;
    vector<int> v(totalCols);

    vector<bool> visited(totalCols, false);
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});

    while(!q.empty()) {
        int n = q.size();

        for(int i=0; i<n; i++) {
            TreeNode* store = q.front().first;
            int col = q.front().second;
            q.pop();

            int store2 = col-minCol;
            if(visited[store2]==false) {
                v[store2] = store->val;
                visited[store2] = true;
            }

            if(store->left) q.push({store->left, col-1});
            if(store->right) q.push({store->right, col+1});
        }
    }

    return v;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> nodes(n);
    for (int i = 0; i < n; i++) cin >> nodes[i];

    TreeNode* root = buildTree(nodes);

    vector<int> ans = topView(root);

    for (int i = 0; i < (int)ans.size(); i++) {
        if (i) cout << " ";
        cout << ans[i];
    }
    cout << '\n';

    return 0;
}