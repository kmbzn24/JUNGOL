/**************************************************************
    Problem: 1707
    User: qudwns0524
    Language: C
    Result: Success
    Time:1 ms
    Memory:1092 kb
****************************************************************/
 
 
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int array[n][n];
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            array[x][y] = 0;
        }
    }
    int rot = 0; //방향을 나타내는 변수
    int x = -1, y = 0; //좌표값
    for (int i = 1; i <= (n * n); i++) {
        if (rot == 0) {
            if ((x < n - 1) && (array[x + 1][y] == 0)) {
                x++;
            }
            else {
                rot = 1;
                y++;
            }
        }
        else if (rot == 1) {
            if ((y < n - 1) && (array[x][y + 1] == 0)) {
                y++;
            }
            else {
                rot = 2;
                x--;
            }
        }
        else if (rot == 2) {
            if ((x > 0) && (array[x - 1][y] == 0)) {
                x--;
            }
            else {
                rot = 3;
                y--;
            }
        }
        else if (rot == 3) {
            if ((y > 0) && (array[x][y - 1] == 0)) {
                y--;
            }
            else {
                rot = 0;
                x++;
            }
        }
        array[x][y] = i;
    }
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            printf("%d ", array[x][y]);
        }
        printf("\n");
    }
    return 0;
}
