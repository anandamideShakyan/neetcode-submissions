class Solution {
public:
    int findMin(vector<int> &nums) {
        int len=nums.size();
        int l=0,h=len-1;
        int res=nums[0];
        
        while(l<=h) {
            int mid=l+(h-l)/2;
            res=min(res,nums[mid]);
            if(nums[l]>=nums[h]) {
                if(nums[mid]>=nums[l]){
                    l=mid+1;

                                }
                
                else {
                    
                    h=mid-1;
                }

            }
            else {
                res=min(res,nums[l]);
                break;
            }
        }
        return res;
    }
};
