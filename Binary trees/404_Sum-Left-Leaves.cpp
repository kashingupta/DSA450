class Solution {
public:
    int sum=0;
    void toCheck(TreeNode*root,bool isTrue)
    {
        if(root==NULL)
        {
            return;    
        }
        
        if(root->left==NULL && root->right==NULL && isTrue)
        {
            sum+=root->val;
        }
        toCheck(root->left,true);
        toCheck(root->right,false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        toCheck(root,false);
        return sum;
    }
};