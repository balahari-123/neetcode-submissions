class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        
        while(l <= r){
            int m = l + (r - l) / 2;
            
            if(nums[m] == target){
                return m;
            }
            
            // Check if the right half is sorted
            if(nums[m] <= nums[r]){
                if(nums[m] < target && target <= nums[r]){
                    l = m + 1; // Target is in the right half
                } else {
                    r = m - 1; // Target is in the left half
                }
            } 
            // Otherwise, the left half must be sorted
            else {
                if(nums[l] <= target && target < nums[m]){
                    r = m - 1; // Target is in the left half
                } else {
                    l = m + 1; // Target is in the right half
                }
            }
        }
        return -1;
    }
};
