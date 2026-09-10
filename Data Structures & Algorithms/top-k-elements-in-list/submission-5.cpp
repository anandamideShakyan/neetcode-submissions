class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hm;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(hm.find(nums[i])!=hm.end()){
                hm[nums[i]]++;
            }
            else hm.insert({nums[i],1});
        }
        vector<vector<int>> count(nums.size()+1);
        for(auto it:hm){
            count[it.second].push_back(it.first);
        }

        for(int i=count.size()-1;i>=0;i--){
            
                for(int  num:count[i]){
                    res.push_back(num);
                    if(res.size()==k) return res;
                }
            
        }
        return res;
    }
};
