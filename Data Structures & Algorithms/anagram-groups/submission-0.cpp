class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(auto s : strs){
            vector<int> freq(26, 0);

            for(auto x : s){
                freq[x-'a']++;
            }

            string key = "";
            for(int i = 0; i < 26; i++){
                key += to_string(freq[i]) + '@';
                // @ is used here to seperate frequency in string format...
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto str : mp){
            ans.push_back(str.second);
        }
        return ans;
    }
};
