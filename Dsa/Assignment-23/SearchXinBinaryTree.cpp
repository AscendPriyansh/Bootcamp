#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    long long val;
    TreeNode *left, *right;
    TreeNode(long long x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(const vector<string>& nodes) {
    if (nodes.empty() || nodes[0] == "null") return nullptr;

    TreeNode* root = new TreeNode(stoll(nodes[0]));
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* cur = q.front();
        q.pop();

        if (nodes[i] != "null") {
            cur->left = new TreeNode(stoll(nodes[i]));
            q.push(cur->left);
        }
        i++;

        if (i < nodes.size() && nodes[i] != "null") {
            cur->right = new TreeNode(stoll(nodes[i]));
            q.push(cur->right);
        }
        i++;
    }
    return root;
}

// ================= STUDENT FUNCTION =================
void PreOrder(TreeNode* root, long long X, bool& flag) {
    if(root==nullptr) {
        return;
    }
    else {
        if(root->val==X) {
            flag = true;
        }
    }
    PreOrder(root->left, X, flag);
    PreOrder(root->right, X, flag);
}

bool searchValue(TreeNode* root, long long X) {
    bool flag = false;
    PreOrder(root, X, flag);

    return flag;
}
// ====================================================

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> nodes(n);
    for (int i = 0; i < n; i++) cin >> nodes[i];

    long long X;
    cin >> X;

    TreeNode* root = buildTree(nodes);

    cout << (searchValue(root, X) ? "true" : "false") << '\n';
}