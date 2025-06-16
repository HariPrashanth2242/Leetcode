class Solution {
public:

    bool exist(vector<vector<char>>& board, string word) {
        char a = word[0];
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) { 
                if (board[i][j] == word[0]) {
                    if (helper(n, m, board, word, i, j, 0)) return true;
                }
            }
        }
        return false;
    }

    bool helper(int n, int m, vector<vector<char>>& board, string word, int i, int j, int idx) {
        if (idx == word.length()) return true;

        if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] != word[idx]) return false;

        char z = board[i][j];
        board[i][j] = '#';

        if (j < m && helper(n, m, board, word, i, j + 1, idx + 1)) return true;
        if (j > 0 && helper(n, m, board, word, i, j - 1, idx + 1)) return true;
        if (i < n && helper(n, m, board, word, i + 1, j, idx + 1)) return true;
        if (i > 0 && helper(n, m, board, word, i - 1, j, idx + 1)) return true;

        board[i][j] = z; 
        return false;
    }

};
