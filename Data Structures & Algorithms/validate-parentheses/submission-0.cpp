class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch : s){
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }
            else{
                // If control is here and st is empty then the valid parenthesis has no longer..
                if(st.empty()) return false;

                // If control is here then st is non-empty...
                char top = st.top(); // Last element in top...
                st.pop(); // It will remove the last element...

                // Now checking last removed char was valid or not using same element stored in top...
                if((ch == ')' && top != '(') || (ch == ']' && top != '[') || (ch == '}' && top != '{')){
                    return false;
                } 
            }
        }
        return st.empty();
    }
};
