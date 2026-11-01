class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int l = n - 1;
        while(s[l] == ' '){
            l--;
        }
        int ans = 0;
        while(l >= 0 && s[l] != ' '){
            ans++;
            l--;
        }
        return ans;
    }
};