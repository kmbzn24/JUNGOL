/**************************************************************
    Problem: 1740
    User: qudwns0524
    Language: C
    Result: Success
    Time:225 ms
    Memory:1092 kb
****************************************************************/
 
 
#include <stdio.h>
int main(void) {
    int s = 0, e = 0;
    int per = 0, first = 0, result = 0;
    scanf("%d", &s);
    scanf("%d", &e);
    if (s == 1) {
        s = 2;
    }
    for (int i = s; i <= e; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                per++;
            }
        }
        if (per == 0) {
            result += i;
            if (first == 0) {
                first = i;
            }
        }
        per = 0;
    }
    if (first == 0) {
        printf("%d", -1);
    }
    else {
        printf("%d\n%d", result, first);
    }
    return 0;
}
