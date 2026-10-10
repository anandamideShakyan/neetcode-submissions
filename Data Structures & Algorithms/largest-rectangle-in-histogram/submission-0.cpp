class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int len=heights.size();
        vector<int> left(len),right(len);
        for(int i=0;i<len;i++) {
            left[i]=i;
            while(!st.empty() && heights[st.top()]>=heights[i]) {
                 left[i]=left[st.top()];
                 st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=len-1;i>=0;i--) {
            right[i]=i;
            while(!st.empty() && heights[st.top()]>=heights[i]) {
                 right[i]=right[st.top()];
                 st.pop();
            }
            
            st.push(i);
        }

        int res=0;
        for(int i=0;i<len;i++){
            res=max(res, (right[i]-left[i]+1)*heights[i]);
            
        }

        return res;

    }
};
