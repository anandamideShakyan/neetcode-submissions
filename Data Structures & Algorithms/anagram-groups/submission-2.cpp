class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,int> hm;
        int index=0;
        for(string str: strs){
         vector<int> count(26,0);
         for(char c: str){
            count[c-'a']++;
         }

         string key= to_string(count[0]);
         for(int i=1;i<26;i++){
            key+= ", " + to_string(count[i]);
         }
         if(hm.find(key)!=hm.end()){
            result[hm[key]].push_back(str);
         }
         else{
            result.push_back({str});
            hm.insert({key,index++});
         }
        }
        return result;
    }
};
