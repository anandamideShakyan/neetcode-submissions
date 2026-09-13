class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_map<int,int> mp;
        for(int num: nums) {
            if(!mp[num]){
                mp[num]=mp[num-1] + mp[num+1] + 1;
                mp[num-mp[num-1]]=mp[num];
                mp[num+mp[num+1]]=mp[num];
                cout<< num<< " "<< mp[num]<< endl;
                res=max(res, mp[num]);

            }
            
            
        }
        return res;
    }
};
