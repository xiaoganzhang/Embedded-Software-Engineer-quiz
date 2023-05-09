#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void find_squares(int n, int m) {
    while (n != 0 && m != 0) {
        if (n > m) {
            printf("%dx%d\n", m, m);
            n -= m;
        } else {
            printf("%dx%d\n", n, n);
            m -= n;
        }
    }
}

int main() {
    int n, m;

    printf("Enter the dimensions N and M(separate with space): ");
    scanf("%d %d", &n, &m);

    find_squares(n, m);

    return 0;
    
}
