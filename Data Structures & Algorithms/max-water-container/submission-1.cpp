class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=0;
        int i=0,j=heights.size()-1;
        while(i<j){
            res=max(res,min(heights[i],heights[j])*(j-i));
            if(heights[i]>heights[j]){
                j--;
            }
            else i++;
        }
        return res;
    }
};
