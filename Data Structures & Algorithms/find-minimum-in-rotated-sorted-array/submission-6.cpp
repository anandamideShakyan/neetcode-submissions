class Solution {
public:
    int findMin(vector<int> &nums) {
        int len=nums.size();
        int l=0,r=len-1;

        while(l<r) {
            int mid=l+(r-l)/2;
            if(nums[l]>=nums[r]){
                if(nums[mid]>=nums[l]){
                    l=mid+1;
                }
                else{
                    r=mid;
                }
            }
            else {
                
                break;
            }
        }
        return nums[l];
    }
};
