class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, int> hm;
       vector<vector<string>> result;
       int index=0;
       for(int i=0;i<strs.size();i++){
         vector<int> count(26,0);
         for(int j=0;j<strs[i].length();j++){
            count[strs[i][j]-'a']++;
         }
         string key=to_string(count[0]);
         for(int j=0;j<26;j++){
            key+= ", "+to_string(count[j]);
         }
         if(hm.find(key)!=hm.end()){
            result[hm[key]].push_back(strs[i]);
         }
         else{
            result.push_back({strs[i]});
            hm.insert({key,index++});

         }
       }
        return result;
    }
};
