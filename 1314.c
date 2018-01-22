/**************************************************************
    Problem: 1314
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
    char array[n][n];
    char c = 'A';
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                array[j][i] = c;
                if (c == 'Z') {
                    c = 'A';
                }
                else {
                    c++;
                }
            }
        }
        else {
            for (int j = n; j > 0; j--) {
                array[j - 1][i] = c;
                if (c == 'Z') {
                    c = 'A';
                }
                else {
                    c++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
