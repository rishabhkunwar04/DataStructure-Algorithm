  
#include<bits/stdc++.h>
using namespace std;

    bool isSafe(int row, int col, vector<string> board, int n) {
        int duprow = row;
        int dupcol = col; 
        
        while(row >= 0 && col >= 0) {    // check upper diagonal

            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        
        col = dupcol; 
        row = duprow;
        while(col>=0) { // check in same row

            if(board[row][col] == 'Q') return false;
            col--; 
        }
    
        row = duprow;
        col = dupcol; 
        while(row<n && col>=0) {  // check lower diagonal

            if(board[row][col] == 'Q') return false;
            row++;
            col--; 
        }
        
        return true; 
    }

    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n) {
        if(col == n) {
            ans.push_back(board); 
            return; 
        }
    
        for(int row = 0;row<n;row++) {
            if(isSafe(row, col, board, n)) {
                board[row][col] = 'Q'; 
                solve(col+1, board, ans, n); 
                board[row][col] = '.'; 
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans; 
        vector<string> board(n);
        string s(n, '.'); 
        for(int i = 0;i<n;i++) {
            board[i] = s; 
        }
         
        solve(0,board, ans, n); 
        return ans; 
    }
    int main()
    {
    int n;cin>>n;

    vector<vector<string>>res=solveNQueens(n);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
    }