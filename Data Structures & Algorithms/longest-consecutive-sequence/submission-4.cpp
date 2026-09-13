class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //o(nlogn)
        int res=0;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()){
            int streak=1,j=i+1;
            while(j<nums.size() ){
                if(nums[j]>nums[j-1]+1) break;
                if(nums[j]==nums[j-1]+1)
                    streak++;
                j++;
                
            }
            res=max(res,streak);
            i=j;
        }
        return res;
    }   
};
