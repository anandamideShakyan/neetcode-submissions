class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int len=height.size();
        int l=0, h=len-1;
        int leftMax=height[l], rightMax=height[h];
        while(l<h){
            leftMax=max(leftMax,height[l]);
            rightMax=max(rightMax, height[h]);
            if(leftMax<rightMax){
                res+=leftMax-height[l];
                l++;
            }
            else{
                res+=rightMax-height[h];
                h--;
            }
        }
        return res;
    }
};
