class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string s: tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                int secn = st.top(); 
                st.pop();
                int firn = st.top(); st.pop();
                int ans ;
                char c = s[0];
                switch(c){
                    case '+': 
                        ans = firn + secn;
                        break;
                    case '-':
                        ans = firn - secn;
                        break;
                    case '*':
                        ans = firn*secn;
                        break;
                    case '/':
                        ans = firn/secn;
                        break;
                }
                st.push(ans);
            } else {
                int num = stoi(s);
                st.push(num);
            }
        }
        return st.top();
    }
};
