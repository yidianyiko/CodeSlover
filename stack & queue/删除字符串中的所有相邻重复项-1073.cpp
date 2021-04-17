class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> st;
        for(int i = 0;i<S.size();i++){
            if(st.empty() || st.top() != S[i]){
                st.push(S[i]);
            } else {
                st.pop();
            }
        }
        string result = "";
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};