#include<stdio.h>
/**
 * Given the root of a complete binary tree, return the number of the nodes in the tree.
 * According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far 
 * left as possible. It can have between 1 and 2h nodes inclusive at the last level h.
 * Design an algorithm that runs in less than O(n) time complexity.
 * 
 * Ej: root = [1,2,3,4,5,6] -> 6
 */
struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

int countNodes(struct TreeNode* root){
    if (root == NULL) return 0;
    return 1+countNodes(root->left)+countNodes(root->right);
}