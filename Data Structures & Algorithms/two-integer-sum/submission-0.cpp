class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hm;
        for(int i=0;i<nums.size();i++){
            if(hm.find(target-nums[i])!=hm.end()){
                return {hm.find(target-nums[i])->second,i};
               
            }
            hm.insert({nums[i],i});
        }
        return{};
    }
};
