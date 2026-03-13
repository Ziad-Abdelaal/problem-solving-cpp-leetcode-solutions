//https://leetcode.com/problems/two-sum/?envType=problem-list-v2&envId=wt1z74ct

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        for(int i=0;i<nums.size();i++)
        {
             for(int j=i+1;j<nums.size();j++)
             {
                if(nums[i]+nums[j]==target)
                {
                    return {i,j};
                }
             }
        }

     return{};
    }
};
