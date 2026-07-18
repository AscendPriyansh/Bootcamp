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
void Minicooper(TreeNode* root, long long& mini) {
    if(root==nullptr) {
        return;
    }
    else {
        if(root->val<mini) {
            mini=root->val;
        }
    }
    Minicooper(root->left, mini);
    Minicooper(root->right, mini);
}

long long minOfTree(TreeNode* root) {
    if(root==nullptr) {
        return 0LL;
    }
    
    long long mini = LLONG_MAX;
    Minicooper(root, mini);

    return mini;
}
// ====================================================

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> nodes(n);
    for (int i = 0; i < n; i++) cin >> nodes[i];

    TreeNode* root = buildTree(nodes);

    cout << minOfTree(root) << '\n';
}