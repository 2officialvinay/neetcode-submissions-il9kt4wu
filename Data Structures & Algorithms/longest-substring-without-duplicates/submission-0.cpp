class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> subStr;
        int l = 0;
        int maxSubStr = 0;

        for(int r = 0; r < s.length(); r++){
            while(subStr.find(s[r]) != subStr.end()){
                subStr.erase(s[l]);
                l++;
            }
            subStr.insert(s[r]);
            maxSubStr = max(maxSubStr, r-l+1);
        }
        return maxSubStr;
    }
};
