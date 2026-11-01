class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(string s: details){
            int ch = s[11] - '0';
            int a = s[12] - '0';
            if(ch >= 6){
                if(ch == 6 && a == 0) continue;
                ans++;
            }
        }
        return ans;
    }
};