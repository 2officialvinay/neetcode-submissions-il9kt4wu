class Solution {
public:
    void allSubset(vector<int>& nums, int i, vector<vector<int>> &ans, vector<int> &subset){
        // Base Case...
        if(i >= nums.size()){
            ans.push_back(subset);
            return;
        }

        // Inlcude...
        subset.push_back(nums[i]);
        allSubset(nums, i+1, ans, subset);
        // Exclude...
        subset.pop_back();
        allSubset(nums, i+1, ans, subset);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        allSubset(nums, 0, ans, subset);
        return ans;
    }
};
