/**************************************************************
    Problem: 2046
    User: qudwns0524
    Language: C
    Result: Success
    Time:1 ms
    Memory:1092 kb
****************************************************************/
 
 
#include <stdio.h>
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    if (m == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", i + 1);
            }
            printf("\n");
        }
    }
    if (m == 2) {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    printf("%d ", j + 1);
                }
            }
            else {
                for (int j = n; j > 0; j--) {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }
    if (m == 3) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", (i + 1) * (j + 1));
            }
            printf("\n");
        }
    }
    return 0;
}
