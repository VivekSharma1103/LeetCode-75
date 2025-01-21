class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans(n);
        // Initialize vectors  
        for(int i=0;i<n;i++)
        {
            right[i]=1;
            left[i]=1;
        }
        int curr = 1;

        // Left products

        for(int i=1;i<n;i++)
        {
             left[i] = curr*nums[i-1];
             curr = left[i];
        }
        curr=1;
        // Right products
        for(int i=n-2;i>=0;i--)
        {
          right[i] = curr*nums[i+1];
          curr = right[i];
        }
        //Answer 
        for(int i=0;i<n;i++)
        {
            ans[i] = right[i]*left[i];
        }
        return ans;
    }
};
