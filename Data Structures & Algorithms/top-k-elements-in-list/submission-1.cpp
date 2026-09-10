class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> hm;
        for(auto num:nums){
            if(hm.find(num)!=hm.end()) {
                hm[num]++;
            }
            else hm.insert({num,1});
        }
        vector<pair<int,int>> temp;
        for(auto it:hm){
            temp.push_back({it.second,it.first});
        }
        sort(temp.rbegin(),temp.rend());
        for(int i=0;i<k;i++){
            res.push_back(temp[i].second);
        }
        return res;
    }
};
