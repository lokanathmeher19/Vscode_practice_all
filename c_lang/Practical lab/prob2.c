#include <stdio.h>

int board[10], n;

int place(int row, int column) {
    for (int i = 1; i < row; i++) {
        if (board[i] == column || abs(board[i] - column) == abs(i - row))
            return 0;
    }
    return 1;
}

void queen(int row) {
    for (int column = 1; column <= n; column++) {
        if (place(row, column)) {
            board[row] = column;

            if (row == n) {
                for (int i = 1; i <= n; i++)
                    printf("%d ", board[i]);
                printf("\n");
            } else
                queen(row + 1);
        }
    }
}

int main() {
    n = 4;
    queen(1);
}