class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length = strs[0].size();
        string a = strs[0];
        int ans = length;
        for(string s: strs){
            int n = 0;
            while(n < length && n < s.size()){
                if(s[n] != a[n]){
                    break;
                }
                n++; 
            }
            ans = min(ans, n);
        }
        return a.substr(0, ans);
    }
};