class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
      for(int i=0;i<strs.size();i++){
        res+=to_string(strs[i].length())+"#"+strs[i];

      }
      return res;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> res;
        while(i<s.length()){
            
            
            
            
                int temp=0;
                
                while(i<s.length() && s[i]<='9' && s[i]>='0'){
                    int digit = s[i]-'0';
                    temp= temp*10+digit;
                    i++;
                    
                }
                int j=0;
                i++;
                string tempStr;
                for(j=0;j<temp;j++){
                    tempStr+=s[i+j];
                }
                res.push_back(tempStr);
                i+=j;
            
            
        }
        return res;
    }
};
