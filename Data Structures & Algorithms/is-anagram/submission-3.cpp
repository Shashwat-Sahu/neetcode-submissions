class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
        vector<int> v1(26,0);
        for(int i=0; i<s.size();i++)
        {
            v1[s[i]-'a']++;
            
            v1[t[i]-'a']--;
        }

        for(int i=0; i<26;i++)
        {
            if(v1[i]!=0)
            return false;
        }
        return true;
    }
};
