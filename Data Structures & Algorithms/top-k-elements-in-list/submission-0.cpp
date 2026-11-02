class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i: nums){
            m[i]++;
        }
        using p = pair<int, int>;
        priority_queue<p, vector<p>, greater<p>> heap;
        for(auto entry: m){
            int val = entry.first;
            int freq = entry.second;
            heap.push({freq, val});
            if(heap.size() > k){
                heap.pop();
            }
        }
        vector<int> ans;
        while(!heap.empty()){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;
    }
};
