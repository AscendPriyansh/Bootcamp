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
    Return whether the binary tree is a valid Binary Search Tree.
*/
void inorder(vector<int>& arr, TreeNode* root) {
    if(root==nullptr) return;

    if(root->left) inorder(arr, root->left);
    arr.push_back(root->val);
    if(root->right) inorder(arr, root->right);
}

bool isValidBST(TreeNode* root) {
    vector<int> arr;

    inorder(arr, root);

    for(int i=1; i<arr.size(); i++) {
        if(arr[i-1]>=arr[i]) {
            return false;
        }
    }

    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> nodes(n);
    for (int i = 0; i < n; i++) cin >> nodes[i];

    TreeNode* root = buildTree(nodes);

    bool ans = isValidBST(root);

    cout << (ans ? "true" : "false") << '\n';

    return 0;
}