/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;

        int leftht=getheight(root->left);
        int rightht=getheight(root->right);

        if(abs(leftht-rightht)>1) return false;

        return isBalanced(root->right)&& isBalanced(root->left);

    }

    int getheight(TreeNode* root){
        if(root==nullptr) return 0;

        int leftht=getheight(root->left);
        int rightht=getheight(root->right);

        return max(leftht,rightht)+1;
    }
};