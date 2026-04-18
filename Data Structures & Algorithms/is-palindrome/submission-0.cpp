class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;

        while(i < s.length()){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = ('a' - 'A') + s[i];
                i++;
            }
            else if(!((s[i] >='a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))){
                s.erase(i,1);
            }
            else{
                i++;
            }
        }

        int start = 0, end = s.length()-1;
        while(start < end){
            if(s[start] == s[end]){
                start++, end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
