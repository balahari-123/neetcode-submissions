class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, int> seen;
        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            if(seen.find(s) == seen.end()){
                seen[s] = ans.size();
                ans.push_back({});
            }
            ans[seen[s]].push_back(strs[i]);
        }
        return ans;
    }
};
