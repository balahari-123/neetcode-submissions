class Solution {
public:
    string minWindow(string s, string t) {
        string a = "";
        unordered_map<char, int> want;
        unordered_map<char, int> window;
        for(char ch: t){
            want[ch]++;
        }
        int have = 0;
        int minLen = INT_MAX;
        int l = 0;
        int startIndex = 0;
        for(int r = 0; r < s.length(); r++){
            char rightChar = s[r];
            window[rightChar]++;
            if(want.find(rightChar) != want.end() && want[rightChar] == window[rightChar]){
                have++;
            }
            while(have == want.size()){
                if(r - l + 1 < minLen){
                    minLen = r - l + 1;
                    startIndex = l;
                }
                char leftChar = s[l];
                window[leftChar]--;
                if(want.find(leftChar) != want.end() && window[leftChar] < want[leftChar]){
                    have--;
                }
                l++;
            }
        }
        return (minLen == INT_MAX) ? "": s.substr(startIndex, minLen);
    }
};
