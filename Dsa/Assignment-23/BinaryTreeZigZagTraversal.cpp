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
vector<vector<long long>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<long long>> v;

    if(root==nullptr) {
        return v;
    }

    queue<TreeNode*> q;
    q.push(root);

    int lvl = 1;
    while(!q.empty()) {
        int n = q.size();

        vector<long long> temp;
        for(int i=0; i<n; i++) {
            TreeNode* store = q.front();
            q.pop();

            temp.push_back(store->val);
            if(store->left!=nullptr) q.push(store->left);
            if(store->right!=nullptr) q.push(store->right);
        }

        if(lvl%2==0) {
            reverse(temp.begin(), temp.end());
            v.push_back(temp);
        }
        else {
            v.push_back(temp);
        }
        lvl++;
    }

    return v;
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

    vector<vector<long long>> ans = zigzagLevelOrder(root);

    for (auto &level : ans) {
        for (int i = 0; i < level.size(); i++) {
            if (i) cout << " ";
            cout << level[i];
        }
        cout << '\n';
    }
}