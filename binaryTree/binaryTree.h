#ifndef BIANRYTREE
#define BINARYTREE

#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int v)
        : val(v), left(nullptr), right(nullptr) {}
};

TreeNode* createBinaryTree(const vector<int>& vec) {
    if (vec.empty() || vec[0] == INT_MAX) {
        return nullptr;
    }

    TreeNode* root = new TreeNode(vec[0]);
    queue<TreeNode*> q;
    q.push(root);

    size_t i = 1;
    while (i < vec.size()) {
        TreeNode* cur = q.front();
        q.pop();

        // left node
        if (i < vec.size() && vec[i] != INT_MAX) {
            cur->left = new TreeNode(vec[i]);
            q.push(cur->left);
        }
        ++i;
        
        // right node
        if (i < vec.size() && vec[i] != INT_MAX) {
            cur->right = new TreeNode(vec[i]);
            q.push(cur->right);
        }
        ++i;
    }

    return root;
}

void printBinaryTreeInorder(TreeNode* root)
{
    if (root == nullptr) {
        return;
    }
    printBinaryTreeInorder(root->left);
    cout << root->val << ", ";
    printBinaryTreeInorder(root->right);
}


#endif