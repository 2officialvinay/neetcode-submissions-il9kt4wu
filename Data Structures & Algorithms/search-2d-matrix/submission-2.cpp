class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        // if(matrix[row][col] == target){
        //         return true;
        //     }
        int start = 0;
        int end = row*col - 1;
        
        while(start <= end){
            int mid = (start + end)/2;
            int m = mid/col;
            int n = mid % col;
            if(matrix[m][n] == target){
                return true;
            }
            if(matrix[m][n] > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return false;
    }
};
