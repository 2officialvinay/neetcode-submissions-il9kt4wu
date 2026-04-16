class Solution {
public:
    void twoSumHelper(vector<int>& arr, int target, vector<int> &result){
        int left = 0, right = arr.size()-1;
        while(left < right){
            int currSum = arr[left] + arr[right];
            if(currSum > target){
                right--;
            }
            else if(currSum < target){
                left++;
            }
            else{
                result.push_back(left+1);
                result.push_back(right+1);
                return;
            }
        }
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        twoSumHelper(numbers, target, result);
        return result;
    }
};
