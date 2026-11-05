class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> seen;
        int l = 0;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(seen[s[i]] > 0){
                l = max(seen[s[i]], l);
            }
            seen[s[i]] = i + 1;
            int dis = i - l + 1;
            ans = max(ans, dis);
        }
        return ans;
    }
};
