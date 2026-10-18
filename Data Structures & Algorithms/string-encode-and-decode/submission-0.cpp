class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(int i=0;i<strs.size();i++)
        {
            s=s+strs[i]+"_shashwat_";
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> vt;
        string curr="";
        for(int i=0;i<s.size();i++)
        {
            if(s.substr(i, 10).compare("_shashwat_")==0)
            {
                vt.push_back(curr);
                i+=9;
                curr="";
            }
            else
            {
                curr=curr+s[i];
            }
        }
        return vt;
    }
};
