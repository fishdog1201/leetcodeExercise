#include "binaryTree.h"

int main()
{
    vector<int> vec = {1, INT_MAX, 2, 3};
    TreeNode* root = createBinaryTree(vec);
    printBinaryTreeInorder(root);
    return 0;
}