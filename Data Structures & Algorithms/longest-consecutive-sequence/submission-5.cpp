class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //o(nlogn)
        int res=0;
        sort(nums.begin(),nums.end());
        int i=0,streak;
        while(i<nums.size()){
            streak=1;
        
            while(i+1<nums.size() ) {
                if(nums[i+1]>nums[i]+1)
                break;
                else if(nums[i+1]==nums[i]+1)
                {
                    streak++;
                }
                    i++;
            }
            res=max(res,streak);
            i++;
        }
        return res;
    }   
};
