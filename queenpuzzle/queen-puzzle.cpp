#include <iostream>
#include <vector>
using namespace std;

const int N = 8; // 棋盘大小
int board[N][N] = {0}; // 初始化棋盘，0表示没有皇后，1表示有皇后

// 打印棋盘
void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 1) {
                cout << "Q "; // Q表示皇后
            } else {
                cout << ". "; // .表示空位
            }
        }
        cout << endl;
    }
}

// 检查是否可以在 (row, col) 位置放置皇后
bool isValid(int row, int col) {
    // 检查当前列是否有其他皇后
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return false;
        }
    }

    // 检查左上对角线是否有其他皇后
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // 检查右上对角线是否有其他皇后
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // 如果没有冲突，返回true
    return true;
}

// 尝试在第 row 行放置皇后
bool solveNQueens(int row) {
    // 如果成功放置了 N 个皇后，返回 true
    if (row == N) {
        return true;
    }

    // 尝试在当前行的每一列放置皇后
    for (int col = 0; col < N; col++) {
        if (isValid(row, col)) { // 如果可以放置皇后
            board[row][col] = 1; // 放置皇后

            // 递归尝试在下一行放置皇后
            if (solveNQueens(row + 1)) {
                return true;
            }

            // 如果失败，回溯并移除皇后
            board[row][col] = 0;
        }
    }

    // 如果在这一行的所有列都无法放置皇后，返回 false
    return false;
}

int main() {
    if (solveNQueens(0)) {
        printBoard(); // 输出棋盘
    } else {
        cout << "没有解决方案！" << endl;
    }
    return 0;
}
