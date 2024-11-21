#include <stdio.h>

int isFibo(int n) {
    int a = 0, b = 1, c = 0;
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }
    return c == n || n == 0;
}

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        if (isFibo(N)) {
            printf("IsFibo\n");
        } else {
            printf("IsNotFibo\n");
        }
    }
    return 0;
}