class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=0,len=nums.size(),h=len-1;
        
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target) {
                return mid;
            }
            if(nums[mid]>=nums[l]){
                if(nums[mid]<target || target<nums[l]) l=mid+1;
                else h=mid-1;
            }
            else{
                if(nums[mid]>target || target>nums[h]) h=mid-1;
                else l=mid+1;
            }
        }
        return -1;
    }
};
