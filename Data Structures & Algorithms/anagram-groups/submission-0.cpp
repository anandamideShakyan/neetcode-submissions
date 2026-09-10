class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, int> hm;
       vector<vector<string>> result;
       int index=0;
       for(int i=0;i<strs.size();i++){
         string temp(strs[i]);
         sort(temp.begin(),temp.end());
         if(hm.find(temp)!=hm.end()){
            result[hm[temp]].push_back(strs[i]);
         }
         else{
            result.push_back({strs[i]});
            hm.insert({temp,index++});

         }
       }
        return result;
    }
};
