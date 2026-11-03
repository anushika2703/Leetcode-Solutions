class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9]={0};
        int col[9]={0};
        int box[9]={0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                int num=board[i][j]-'0'; //character se num mein convert hua
                int mask=1<<num;
                int boxindex=(i/3)*3+(j/3);
                if(rows[i]&mask || col[j]&mask || box[boxindex]&mask) return false;
                rows[i]|=mask;
                col[j]|=mask;
                box[boxindex]|=mask;


            }
        }
        return true;
    }
};