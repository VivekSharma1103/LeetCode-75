class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx = INT_MIN;
        vector<bool> ans;
        for(int i=0;i<candies.size();i++)
        {
            maxx = max(maxx,candies[i]);
        }

        for(int i=0;i<candies.size();i++)
        {
            if(maxx <= candies[i]+extraCandies)
            ans.push_back(true);
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
