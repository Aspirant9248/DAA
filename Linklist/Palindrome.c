#include <stdio.h>
int main()
{
    int n, k = 0;
    printf("enter the size of Array");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("enter the element %d", i + 1);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i <= n / 2; i++)
    {
        if (A[i] != A[n - 1 - i])
        {
            // printf("element %d Is same:",i+1);
            k = 1;
            break;
        }
    }
    if (k == 1)
        printf("Not palindrome:");

    else
        printf("Palinfrome.");
}