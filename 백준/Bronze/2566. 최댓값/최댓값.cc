#include <stdio.h>

int main() {
    int arr[9][9];
    int row = 0, column = 0;
    int high = -1; 
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > high) {
                high = arr[i][j];
                row = i + 1;
                column = j + 1;
            }
        }
    }

    printf("%d\n%d %d", high, row, column);
    return 0;
}