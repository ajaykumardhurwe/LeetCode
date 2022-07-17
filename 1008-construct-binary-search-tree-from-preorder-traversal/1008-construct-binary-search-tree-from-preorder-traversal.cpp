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
    
    TreeNode* solve(vector<int>& preorder, int &i, int upperbond){
        
        if(i==preorder.size() || preorder[i] > upperbond) return NULL;
        
        TreeNode* bst = new TreeNode(preorder[i++]);
        bst->left = solve(preorder, i, bst->val);
        bst->right = solve(preorder, i, upperbond);
        return bst;
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return solve(preorder, i, INT_MAX);
    }
};