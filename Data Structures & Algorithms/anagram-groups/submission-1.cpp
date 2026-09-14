class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<int>> v(n, vector<int>(26, 0));
        for (int i = 0; i < n; i++) {
            for (auto x : strs[i]) {
                v[i][x - 'a']++;
            }
        }

        unordered_map<string, vector<int>> m;
        for (int y = 0; y < n; y++) {
            string l = "";
            for (int i = 0; i < 26; i++) {
                l = l + "#" + to_string(v[y][i]);
            }
            if (m.find(l) == m.end()) {
                vector<int> x;
                m[l] = x;
                
            }
            m[l].push_back(y);
        }
        vector<vector<string>> ans;
        for (auto x : m) {
            vector<string> v;
            for (auto y : x.second) v.push_back(strs[y]);
            ans.push_back(v);
        }
        return ans;
    }
};
