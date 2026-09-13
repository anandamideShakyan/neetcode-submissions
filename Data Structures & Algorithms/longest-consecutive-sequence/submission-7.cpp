class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int> st(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            int streak=1;
            if(!st.count(nums[i]-1)){
                int cur=nums[i]+1;
                while(st.count(cur)){
                    cur++;
                    streak++;
                }
                res=max(res,streak);
            }
        }
        return res;
    }
};
