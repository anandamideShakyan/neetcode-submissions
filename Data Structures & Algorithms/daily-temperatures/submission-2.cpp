class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int len=temperatures.size();
        vector<int> res(len,0);
        for(int i=0;i<len;i++){
            while(!st.empty()&& temperatures[i]>temperatures[st.top()]){
               
                    int temp=st.top();
                    st.pop();
                    res[temp]=i-temp;
                
            }
            st.push(i);
        }
        return res;
    }
};
