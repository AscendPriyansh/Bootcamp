#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(const vector<string>& nodes) {
    if (nodes.empty() || nodes[0] == "null") return nullptr;

    TreeNode* root = new TreeNode(stoi(nodes[0]));
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* cur = q.front();
        q.pop();

        if (nodes[i] != "null") {
            cur->left = new TreeNode(stoi(nodes[i]));
            q.push(cur->left);
        }
        i++;

        if (i < nodes.size() && nodes[i] != "null") {
            cur->right = new TreeNode(stoi(nodes[i]));
            q.push(cur->right);
        }
        i++;
    }
    return root;
}

// ================= IMPLEMENT FUNCTION =================
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    if (!root) return result;
    
    stack<TreeNode*> st;
    st.push(root);
    
    while (!st.empty()) {
        TreeNode* cur = st.top();
        st.pop();
        
        result.push_back(cur->val); // Root
        
        // Push right first so left is processed first
        if (cur->right) st.push(cur->right);
        if (cur->left) st.push(cur->left);
    }
    
    return result;
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

    vector<int> result = preorderTraversal(root);

    for (int i = 0; i < result.size(); i++) {
        if (i) cout << " ";
        cout << result[i];
    }
    cout << '\n';
}