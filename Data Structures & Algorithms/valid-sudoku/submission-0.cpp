class Solution {
public:
    bool checkBox(vector<vector<char>>& board, int i, int j){
        unordered_set<char> seen;
        for(int m = i; m < i + 3; m++){
            for(int n = j; n < j + 3; n++){
                char a = board[m][n];
                if(a == '.'){
                    continue;
                }
                if(seen.find(board[m][n]) != seen.end()){
                    return false;
                }
                seen.insert(board[m][n]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            unordered_set<char> seen;
            for(int j = 0; j < 9; j++){
                char a = board[i][j];
                if(a == '.') continue;
                if(seen.find(board[i][j]) != seen.end()){
                    return false;
                }
                seen.insert(board[i][j]);
            }
        }
        for(int i = 0; i < 9; i++){
            unordered_set<char> seen;
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.') continue;
                if(seen.find(board[j][i]) != seen.end()){
                    return false;
                }
                seen.insert(board[j][i]);
            }
        }
        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                if(!(checkBox(board, i, j))){
                    return false;
                }
            }
        }
        return true;
    }
};
