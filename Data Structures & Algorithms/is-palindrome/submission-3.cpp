class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.length()-1;
        while ( i<j){
            if(!isAlnum(s[i])) {
                i++;
                continue;
            }
            if(!isAlnum(s[j])) {
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            } 
            i++;
            j--;
        }
        return true;
    }

    bool isAlnum(char c){
        return ((c>='a' && c<='z')|| (c>='A' && c<='Z') || (c>='0' && c<='9'));
    }
};
