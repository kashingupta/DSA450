class Solution {
public:
    
    void func(TreeNode*root,string s,vector<string>&v)
    {
        if(root==NULL)
        {
            return;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            s += to_string(root->val);
            v.push_back(s);
            s="";
        }
        s += to_string(root->val) + "->";
        func(root->left,s,v);
        func(root->right,s,v);
    }

    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> v;
        string s;
        func(root,s,v);
        return v;
    }
};