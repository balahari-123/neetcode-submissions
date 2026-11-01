class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int great = -1;
        int n = arr.size();
        vector<int> ans(n, -1);
        for(int i = n - 2; i >= 0; i--){
            great = max(great, arr[i + 1]);
            ans[i] = great;
        }
        return ans;
    }
};