class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;
        for(int i=0;i<tokens.size();i++) {
            if(tokens[i]=="+" || tokens[i]=="-" ||tokens[i]=="*" ||tokens[i]=="/" ) {
                int temp;
                if(st.empty()) return -1;
                int first = st.top();
                st.pop();
                if(st.empty()) return -1;
                int second = st.top();
                st.pop();
                if(tokens[i]== "+") {
                    temp = first + second;
                }
                else if(tokens[i]== "-")  
                {
                    temp = second - first;
                    
                }
                else if(tokens[i]== "*")  
                {
                    temp = first * second;
                    
                }
                else if(tokens[i]== "/")  
                {
                    temp = second / first;
                    
                    
                }
                st.push(temp);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }

        int res = -1;
        if(!st.empty()) res=st.top();
        return res;
    }
};
