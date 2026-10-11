class Solution {
public:
    int findMin(vector<int> &nums) {
        int len=nums.size();
        int l=0,r=len-1;
        int res=nums[0];
        while(l<=r) {
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r]){
            l=mid+1;
            }
            else {
                res=min(res,nums[mid]);
                r=mid-1;
            }
        }
        return res;
    }
};
