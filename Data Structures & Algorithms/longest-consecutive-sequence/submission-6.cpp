class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hs(nums.begin(), nums.end());
        vector<int> bA;
        int res=0;
        for(int i=0; i<nums.size();i++) {
            if(!hs.count(nums[i]-1)) bA.push_back(nums[i]);
        }
        
        for(int i=0; i< bA.size();i++){
            int cur=bA[i];
            int streak=1;
            while(hs.count(cur+1)){
                cur++;
                streak++;
            }
            res=max(res,streak);
        }

        return res;
    }
};
