#include <stdio.h>

int main()
{
    int a[10] = { 0, }, b[10] = { 0, };
    int n, m, err = 0;

    scanf("%d, %d", &n, &m);

    for (int i = 0, k = 0; i < 5; i++) {
        k = n % 10;
        a[k]++;
        n /= 10;
    }

    for (int i = 0, k = 0; i < 5; i++) {
        k = m % 10;
        b[k]++;
        m /= 10;
    }

    for (int i = 0; i < 9; i++) {
        if (a[i] != b[i]) {
            printf("False");
            err++;
            break;
        }
    }

    if (err == 0) printf("True");

}