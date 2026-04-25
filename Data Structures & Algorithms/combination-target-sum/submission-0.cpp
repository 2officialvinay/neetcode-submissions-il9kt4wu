class Solution {
public:
    void combination_maker(vector<int>& nums, int target, vector<vector<int>> &ans, vector<int> &arr, int index){
        // Base Case...
        if(target == 0){
            ans.push_back(arr);
            return;
        }
        if(target < 0){
            return;
        }

        for(int i = index; i < nums.size(); i++){
            arr.push_back(nums[i]);
            combination_maker(nums, target-nums[i], ans, arr, i);
            arr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        combination_maker(nums, target, ans, arr,0);
        return ans;
    }
};
