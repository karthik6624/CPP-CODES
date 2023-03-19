class Solution {
public:
    void solve(int col, int n, vector<vector<string>> &ans, vector<string> &board, vector<int> &leftRow, vector<int> &lowDiagonal, vector<int> &upDiagonal) {
    if(col == n) {
        ans.push_back(board);
        return;
    }
    for(int row=0; row<n; row++){
        if(leftRow[row]==0 && lowDiagonal[row+col]==0 && upDiagonal[n-1-row+col]==0){
            board[row][col] = 'Q';
            leftRow[row] = 1;
            lowDiagonal[row+col] = 1; 
            upDiagonal[n-1-row+col] = 1;
            solve(col+1, n, ans, board, leftRow, lowDiagonal, upDiagonal);
            board[row][col] = '.';
            leftRow[row] = 0;
            lowDiagonal[row+col] = 0; 
            upDiagonal[n-1-row+col] = 0;
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
    vector<string> board(n);
    string s = "";
    for(int i=0; i<n; i++){
        s.push_back('.');
    }
    for(int i=0; i<n; i++){
        board[i] = s;
    }
    vector<int> leftRow(n, 0);
    vector<int> lowDiagonal(2*n - 1, 0);
    vector<int> upDiagonal(2*n - 1, 0);

    solve(0, n, ans, board, leftRow, lowDiagonal, upDiagonal);
    return ans;
    }
};
