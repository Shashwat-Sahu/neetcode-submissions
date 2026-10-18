class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<long long int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                vector<int> ans = {m[target-nums[i]], i};
                return ans;
            }
            m[nums[i]] = i;
        }
    }
};
