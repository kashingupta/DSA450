class Solution {
public:
    int i=0;
    void func1(TreeNode*root,int maxi)
    {
       if(root==NULL)
       {
           return;
       }
        if(max(root->val,maxi)==root->val)
        {
            i++;
            maxi=root->val;
        }
       func1(root->left,maxi);
        func1(root->right,maxi);
        return;
    }
    
    int goodNodes(TreeNode* root)
    {
        int max=INT_MIN;
        if(root==NULL) return 0;
        if(max<=root->val)
        {
            max=root->val;
            i++;
        }
        func1(root->left,max);
        func1(root->right,max);
        return i;
    }
};