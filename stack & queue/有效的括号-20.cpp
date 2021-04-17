class Solution {
public:
    stack<int> st;
    bool isValid(string s) {
        for(int i = 0; i<s.size();i++){
            switch(s[i]){
                case '(': 
                    st.push(')');
                    break;
                case '[':
                    st.push(']');
                    break;               
                case '{':
                    st.push('}');
                    break;
                default :
                    if(st.empty()||st.top() != s[i])
                        return false;
                    st.pop();
                    break;
            }
        }
        return st.empty();//对于只有一个括号的情况
    }
};