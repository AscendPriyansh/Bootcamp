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
    Return the anti-clockwise boundary traversal of the binary tree
    (root, left boundary, leaves left-to-right, right boundary).
*/
void Preorder(TreeNode* root, vector<int>& v) {
    if(root==nullptr) return;

    if(root->left==nullptr && root->right==nullptr) return;
    v.push_back(root->val);

    if (root->left) Preorder(root->left, v);
    else Preorder(root->right, v);
}

void PreOrder(TreeNode* root, vector<int>& v) {
    if(root==nullptr) return;

    else {
        if(root->left==nullptr && root->right==nullptr) {
            v.push_back(root->val);
            return;
        }
    }

    PreOrder(root->left, v);
    PreOrder(root->right, v);
}

void PreOrderRight(TreeNode* root, vector<int>& temp) {
    if(root==nullptr) return;

    if(root->left==nullptr && root->right==nullptr) return;
    temp.push_back(root->val);
    
    if (root->right) PreOrderRight(root->right, temp);
    else PreOrderRight(root->left, temp);
}


vector<int> boundary(TreeNode* root) {
    vector<int> v;
    if (root == nullptr) return v;

    if (root->left != nullptr || root->right != nullptr) {
        v.push_back(root->val);
    }

    Preorder(root->left, v);
    PreOrder(root, v);
    vector<int> temp;
    PreOrderRight(root->right, temp);

    for(int i=temp.size()-1; i>=0; i--) {
        v.push_back(temp[i]);
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

    vector<int> ans = boundary(root);

    for (int i = 0; i < (int)ans.size(); i++) {
        if (i) cout << " ";
        cout << ans[i];
    }
    cout << '\n';

    return 0;
}