class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hm(26);
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++) {
            hm[s[i]-'a']++;
            hm[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(hm[i]!=0) return false;
        }
        return true;
    }
};
