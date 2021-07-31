class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int maxPro;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mini)    
            {
                mini=prices[i];
            }
            
            else if( (prices[i]-mini) > maxPro)
            {
                maxPro=prices[i]-mini;
            }
        }
        
        if(maxPro<0)
        {
            return 0;    
        }
        
        return maxPro;
    }
};