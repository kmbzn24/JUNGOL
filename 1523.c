/**************************************************************
    Problem: 1523
    User: qudwns0524
    Language: C
    Result: Success
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
 
#include <stdio.h>
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    if ((n < 1) || (n > 100) || (m < 1) || (m > 3)) {
        printf("INPUT ERROR!");
        return 0;
    }
    if (m == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < (i + 1); j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (m == 2) {
        for (int i = n; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (m == 3) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < (n - i - 1); j++) {
                printf(" ");
            }
            for (int j = 0; j < ((i + 1) * 2) - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
