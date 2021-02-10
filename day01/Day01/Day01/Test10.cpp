#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    char a[101];


    srand(time(NULL));

    printf("·£´ý ¾ËÆÄºª Ãâ·Â \n");

    for (int i = 1; i < 101; i++)
    {
        a[i] = rand() % 26 + 65;
    }
    for (int i = 1; i < 101; i++)
    {
        printf("%c", a[i]);
        if (i % 16 == 0) printf("\n");
    }

    return 0;
}
