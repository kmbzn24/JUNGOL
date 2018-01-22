/**************************************************************
    Problem: 1307
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
    for (int i = n; i > 0; i--) {
        for (int j = n; j > 0; j--) {
            array[j - 1][i - 1] = c;
            if (c == 'Z') {
                c = 'A';
            }
            else {
                c++;
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
