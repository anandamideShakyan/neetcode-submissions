class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0;i<len-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1, k=len-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0) {
                    res.push_back({nums[i],nums[j],nums[k]});
                    
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                }   
                else if(nums[i]+nums[j]+nums[k]>0) k--;
                else j++;
            }
        }
        return res;
    }
};
