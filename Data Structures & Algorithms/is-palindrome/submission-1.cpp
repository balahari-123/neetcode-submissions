class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        for(char &ch: s){
            ch = tolower(ch);
        }
        while(l < r){
            if(!isalnum(s[l])){
                l++; continue;
            }
            if(!isalnum(s[r])){
                r--; continue;
            }
            if(s[l] != s[r]){
                return false;
            }
            l++; r--;
        }
        return true;
    }
};
