class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            
                unordered_set<int> hs;
                unordered_set<int> hs2;
                for(int k=0;k<9;k++){
                    if((hs.find(board[i][k])!=hs.end())||(hs2.find(board[k][i])!=hs2.end()))
                    {
                        return false;
                    }
                    if(board[i][k]!='.') hs.insert(board[i][k]);
                    if(board[k][i]!='.') hs2.insert(board[k][i]);
                }
                if(i%3==0) {
                    for(int j=0;j<9;j+=3){
                    unordered_set<int> hs3;

                    for(int k=0;k<3;k++){
                        for(int l=0;l<3;l++) {
                            if(hs3.find(board[i+k][j+l])!=hs3.end()) return false;
                            if(board[i+k][j+l]!='.') hs3.insert(board[i+k][j+l]);
                        }
                    }
                    }
                }
            }
        
        return true;
    }
};
