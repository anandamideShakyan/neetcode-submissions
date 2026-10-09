class Solution {
public:
    int dfs(vector<string>& tokens) {
        string temp=tokens.back();
        tokens.pop_back();
        if(temp!="+" && temp!="-" &&  temp!="*" && temp!="/" ){
            return stoi(temp);
        }
        int left=dfs(tokens);
        int right=dfs(tokens);
        if(temp=="+") return left+right;
        else if(temp=="-") return right-left;
        else if(temp=="*") return right*left;
        else return right/left;
    }
    int evalRPN(vector<string>& tokens) {
        return dfs(tokens);
    }
};
