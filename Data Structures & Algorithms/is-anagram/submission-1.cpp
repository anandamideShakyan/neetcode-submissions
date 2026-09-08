class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hm;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            
            if(hm.find(s[i])!=hm.end()){
                hm[s[i]]+=1;
            }
            else
                hm.insert({s[i],1});
        }

        for(int i=0;i<s.length();i++){
            if(hm.find(t[i])!=hm.end()){
                if(hm[t[i]]==0) {
                    return false;
                }
                hm[t[i]]-=1;
            }
            else {
                return false;
            };
        }

        return true;
    }
};
