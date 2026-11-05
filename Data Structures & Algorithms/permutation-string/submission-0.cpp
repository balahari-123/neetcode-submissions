class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1count;
        for(char ch: s1){
            s1count[ch]++;
        }
        unordered_map<char, int> validCount;
        for(int i = 0; i < s1.size(); i++){
            validCount[s2[i]]++;
        }
        if(validCount == s1count) return true;
        for(int i = s1.size(); i < s2.size(); i++){
            validCount[s2[i - s1.size()]]--;
            if(validCount[s2[i - s1.size()]] == 0){
                validCount.erase((s2[i - s1.size()]));
            }
            validCount[s2[i]]++;
            if(validCount == s1count) return true;
        }
        return false;
    }
};
