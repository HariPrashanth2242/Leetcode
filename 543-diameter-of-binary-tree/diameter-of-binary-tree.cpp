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
int maxdia=0;
    int diameterOfBinaryTree(TreeNode* root) {
        getdia(root);
        return maxdia;
    }

    int getdia(TreeNode* root){
                if(root==nullptr) return 0;

        int leftdia=getdia(root->left);
        int rightdia=getdia(root->right);
        maxdia=max(maxdia,leftdia+rightdia);

        return 1+max(leftdia,rightdia);
        
    }
};