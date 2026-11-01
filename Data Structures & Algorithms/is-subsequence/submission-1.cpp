class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() > t.length()) return false;
        int a = 0, b = 0;
        while(a < s.size() && b < t.size()){
            if(s[a] == t[b]) a++;
            b++;
        }
        return a == s.size();
    }
};