#include<iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


bool isSymmetric(TreeNode* root1, TreeNode* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }else if(root1 == NULL || root2 == NULL){
        return false;
    }
    if(root1->val != root2->val){
        return false;
    }
    if(!isSymmetric(root1->left, root2->right) || !isSymmetric(root1->right, root2->left)){
        return false;
    }
    return true;
}
bool isSymmetric(TreeNode* root) {
    TreeNode* root1 = root;
    TreeNode* root2 = root;
    return isSymmetric(root1, root2);
}