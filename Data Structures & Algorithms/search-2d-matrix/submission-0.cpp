class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int t = 0, d = m - 1;
        while(t <= d){
            int midRow = t + (d - t)/2;
            if(matrix[midRow][0] <= target && matrix[midRow][n - 1] >= target){
                int l = 0, r = n - 1;
                while(l <= r){
                    int mid = l + (r - l)/2;
                    if(matrix[midRow][mid] == target){
                        return true;
                    } else if(matrix[midRow][mid] > target){
                        r = mid - 1;
                    } else {
                        l = mid + 1;
                    }
                }
                return false;
            } else if(matrix[midRow][0] > target){
                d = midRow - 1;
            } else {
                t = midRow + 1;
            }
        }
        return false;
    }
};
