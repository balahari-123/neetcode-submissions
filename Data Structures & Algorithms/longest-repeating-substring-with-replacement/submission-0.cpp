class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_set<char> seen(s.begin(), s.end());
        int ans = 0; 
        for(char c: seen){
            int count = 0, l = 0;
            for(int r = 0; r < s.size(); r++){
                if(s[r] == c){
                    count++;
                }
                while((r - l + 1) - count > k){
                    if(s[l] == c){
                        count--;
                    }
                    l++;
                }
                ans = max(ans, r - l + 1);
            }
        }
        return ans;
    }
};
