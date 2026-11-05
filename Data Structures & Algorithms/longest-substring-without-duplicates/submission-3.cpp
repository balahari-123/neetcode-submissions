class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int l = 0; 
        int ans = 0;
        for(int r = 0; r < s.length(); r++){
            while(seen.find(s[r]) != seen.end()){
                seen.erase(s[l]);
                l++;
            }
            int dis = r - l + 1;
            ans = max(ans, dis);
            seen.insert(s[r]);
        }
        return ans;
    }
};
