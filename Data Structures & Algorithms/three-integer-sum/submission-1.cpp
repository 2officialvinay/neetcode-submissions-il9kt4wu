class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            // skip duplicate i...
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int l = i+1;
            int r = nums.size()-1;

            while(l < r){
                if(nums[i] > 0){
                    break;
                }
                int threeSum = nums[i] + nums[l] + nums[r];
                if(threeSum > 0){
                    r--;
                }
                else if(threeSum < 0){
                    l++;
                }
                else //(threeSum == 0)
                {
                    result.push_back({nums[i],nums[l],nums[r]});

                    // Skip duplicates...
                    while(l < r && nums[l] == nums[l+1]) l++;
                    while(l < r && nums[r] == nums[r-1]) r--;

                    l++;
                    r--;
                }
            }
        }
        return result;
    }
};
