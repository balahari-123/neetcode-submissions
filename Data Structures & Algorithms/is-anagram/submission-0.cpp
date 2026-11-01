class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> scount(26);
        vector<int> tcount(26);
        if(s.length() != t.length()) return false;
        for(int i = 0; i < s.length(); i++){
            scount[s[i] - 'a']++;
        }
        for(int i = 0; i < s.length(); i++){
            tcount[t[i] - 'a']++;
        }
        return scount == tcount;
    }
};
