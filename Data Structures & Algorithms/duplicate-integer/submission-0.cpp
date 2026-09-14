class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums)
        {
            if(m.find(i)!=0)
            return true;
            m[i]++;
        }
        return false;
    }
};