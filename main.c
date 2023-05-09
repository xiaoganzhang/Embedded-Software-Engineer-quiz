// this is Shawn Zhang's answer to quiz question 1

/*Consider that you have a rectangular piece of paper of arbitrary dimensions N by M (where N and M are positive integers). You also have a pair of scissors which can cut perfectly straight with no loss of paper. You wish to reduce the original piece of paper into a series of perfect squares of paper, making the largest possible squares, and using all of the paper provided. Write a function in C that takes the inputs N, and M, and returns the series of squares that can be made out of that piece of paper. No fractional squares, i.e. no square should be less than 1 in length and width.

Some examples:
Input: N =6 , M = 5
Output: 5x5, 1x1, 1x1, 1x1, 1x1, 1x1

Input: N = 1, M = 1
Output: 1x1

Input: N = 9, M = 9
Output: 9x9
*/


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
