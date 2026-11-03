class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int ans = 0; 
        for(int i: nums){
            int count = 1;
            int a = i + 1;
            while(seen.find(a) != seen.end()){
                count++;
                a++;
            }
            a = i - 1;
            while(seen.find(a) != seen.end()){
                count++;
                a--;
            }
            ans = max(count, ans);
            seen.insert(i);
        }
        return ans;
    }
};
