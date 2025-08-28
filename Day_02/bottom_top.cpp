#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of fibbo series:-");
    scanf("%d", &n);
    int A[n];
    A[0] = 0;
    A[1] = 1;

    for (int i = 2; i <= n - 1; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", A[i]);
    }
}