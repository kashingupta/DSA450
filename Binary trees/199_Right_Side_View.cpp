class Solution {
public:
    vector<int>v;
    vector<int> rightSideView(TreeNode* root) 
    {
        if(root==NULL)
        {
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int i=1;
            int n=q.size();
            while(i<=n)
            {
                TreeNode*temp=q.front();
            q.pop();
                if(i==n)
                {
                    v.push_back(temp->val);
                }
                if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);   
                i++;
            }
        }
        return v;
    }
};