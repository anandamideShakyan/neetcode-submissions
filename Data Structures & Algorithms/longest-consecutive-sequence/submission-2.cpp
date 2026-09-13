class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Hash force solution 
        int res=0;
        unordered_map<int,int> hm;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++) {
            if(hm.count(nums[i])) continue;
            else if(hm.find(nums[i]-1)!=hm.end()){
                hm.insert({nums[i],hm[nums[i]-1]+1});
            }
            else hm.insert({nums[i], 1});
        }
        for(auto it:hm){
            res=max(res, it.second);
        }
        return res;
    }
};
