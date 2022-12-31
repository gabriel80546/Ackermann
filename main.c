#include <stdio.h>

int ackermann(int m, int n);

int main() {

    int m, n;

    printf("m sera igual a = ");
    scanf("%d", &m);
    printf("n sera igual a = ");
    scanf("%d", &n);
    printf("ackermann(%i, %i) = %i\n", m, n, ackermann(m, n));
    return 0;
}

int ackermann(int m, int n) {
    if(m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}