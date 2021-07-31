class Solution {
public:
    int height(TreeNode*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL)
        {
            return true;
        }
        int left=height(root->left);
        int right=height(root->right);
        if(abs(left-right)<=1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
        }     
        return false;
    }
};