#include <stdio.h>
int a[5];
int fibbo(int n)
{
    if (n == 0 || n == 1){

        a[n] = n;
        return n;
    }
    
    if (a[n] != -1)
        return a[n];

     a[n] = fibbo(n - 1) + fibbo(n - 2);
     return a[n];
}
int main()
{
    int n = 5;
    for (int j = 0; j <= n; j++)
    {
        a[j] = -1;
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", fibbo(i));
    }
}