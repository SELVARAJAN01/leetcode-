class Solution {
public:
    bool canPlace(int row,int col,vector<string>& board){
        for(int i=row-1;i>=0;i--)
        {
            if(board[i][col]=='Q')
            return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0; i--,j--)
        {
            if(board[i][j]=='Q')
            return false; 
        }
        for(int i=row-1,j=col+1;i>=0  && j<board.size(); i--,j++)
        {
            if(board[i][j]=='Q')
            return false;
        }
        return true;
    }
    void backtrack(int row,vector<vector<string>>& res,vector<string>& board){
        if(row==board.size())
        {
            res.push_back(board);
            return;
        }
        for(int col=0;col<board.size();col++ )
        {
            if(canPlace(row,col,board))
            {
                board[row][col]='Q';
                backtrack(row+1,res,board);
                board[row][col]='.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
       vector<vector<string>>res;
       vector<string>board(n,string(n,'.'));
       backtrack(0,res,board);
       return res;
    }
};