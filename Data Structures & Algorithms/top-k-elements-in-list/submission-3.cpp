class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> hm;
        for(auto num:nums){
            if(hm.find(num)!=hm.end()){
                hm[num]++;
            }
            else hm.insert({num,1});
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> min_heap;
        for(auto it:hm){
            if(min_heap.size()==k){
                if(min_heap.top().first<it.second) min_heap.pop();
                else continue;
            }
            min_heap.push({it.second,it.first});
        }

        for(int i=0;i<k;i++){
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }

        return res;
    }
};
