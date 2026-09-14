class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int len=height.size();
        vector<int> prev(len),suf(len);
        prev[0]=height[0];
        suf[len-1]=height[len-1];
        for(int i=1;i<len;i++) {
            prev[i]=max(prev[i-1],height[i]);
            suf[len-1-i]=max(suf[len-i],height[len-1-i]);
        }
        for(int i=0;i<len;i++){
            res+=min(prev[i],suf[i])-height[i];
        }
        return res;
    }
};
