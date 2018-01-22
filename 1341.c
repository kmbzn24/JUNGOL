/**************************************************************
    Problem: 1341
    User: qudwns0524
    Language: C
    Result: Success
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
 
#include <stdio.h>
int main(void) {
    int s, e;
    while (1) {
        scanf("%d %d", &s, &e);
        if ((s < 2) || (s > 9) || (e < 2) || (e > 9)) {
            printf("INPUT ERROR!\n");
        }
        else {
            break;
        }
    }
    if (s < e) {
        for (int j = s; j <= e; j++) {
            for (int i = 0; i <= 2; i++) {
                printf("%d * %d = %2d   ", j, 3 * i + 1, (3 * i + 1) * j);
                printf("%d * %d = %2d   ", j, 3 * i + 2, (3 * i + 2) * j);
                printf("%d * %d = %2d   ", j, 3 * i + 3, (3 * i + 3) * j);
                printf("\n");
            }
            printf("\n");
        }
    }
    else {
        for (int j = s; j >= e; j--) {
            for (int i = 0; i <= 2; i++) {
                printf("%d * %d = %2d   ", j, 3 * i + 1, (3 * i + 1) * j);
                printf("%d * %d = %2d   ", j, 3 * i + 2, (3 * i + 2) * j);
                printf("%d * %d = %2d   ", j, 3 * i + 3, (3 * i + 3) * j);
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
