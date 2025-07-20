#include <iostream>
#include <vector>

using namespace std;

class NQueens {
private:
    int N;
    vector<vector<string>> solutions;
    
    // Check if it's safe to place a queen at board[row][col]
    bool isSafe(vector<string> &board, int row, int col) {
        
        // Check upper columns
        for (int i = 0; i < row; i++)
            if (board[i][col] == 'Q') return false;
        
        // Check upper left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q') return false;
        
        // Check upper right diagonal
        for (int i = row, j = col; i >= 0 && j < N; i--, j++)
            if (board[i][j] == 'Q') return false;
        
        return true;
    }

    // Recursive backtracking function
    void solve(vector<string> &board, int row) {
        if (row == N) {
            solutions.push_back(board);
            return;
        }

        for (int col = 0; col < N; col++) {
            if (isSafe(board, row, col)) {
                board[row][col] = 'Q';  
                solve(board, row + 1); 
                board[row][col] = '.';  
            }
        }
    }

public:
    // Constructor
    NQueens(int size) : N(size) {}

    // Solve the N-Queens problem
    vector<vector<string>> solveNQueens() {
        vector<string> board(N, string(N, '.')); // Initialize empty board
        solve(board, 0);
        return solutions;
    }

    // Print all solutions
    void printSolutions() {
        int count = 1;
        for (const auto &solution : solutions) {
            cout << "Solution " << count++ << ":\n";
            for (const string &row : solution)
                cout << row << endl;
            cout << endl;
        }
    }
};

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    NQueens nQueens(N);
    vector<vector<string>> solutions = nQueens.solveNQueens();

    if (solutions.empty()) {
        cout << "No solution exists for N = " << N << endl;
    } else {
        cout << "Total solutions found: " << solutions.size() << endl;
        nQueens.printSolutions();
    }

    return 0;
}
