# SIVA
#include <stdio.h>
int main()
{
    int a, b, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &b);

    printf("Fibonacci Series: ");

    for (i = 1; i <= b; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
