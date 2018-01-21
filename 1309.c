/**************************************************************
    Problem: 1309
    User: qudwns0524
    Language: C
    Result: Success
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
 
#include <stdio.h>
int main(void) {
    int n;
    long long result = 1; //int범위를 초과할 수 있으므로 long long형식으로 선언
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) { //결과 변수에 곱하는 과정
        result *= i;
    }
    for (int i = n; i > 0; i--) { //식을 출력하는 과정
        if (i == 1) {
            printf("1! = 1\n");
        }
        else {
            printf("%d! = %d * %d!\n", i, i, i - 1);
        }
    }
    printf("%lld", result); //마지막 줄에 최종 값을 출력한다.
}
