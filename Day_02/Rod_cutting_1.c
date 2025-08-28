/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int Rod_cut(int l[], int v[], int n, int L)
{
    int i = n + 1, j = L + 1;
    int Arr[i][j];
    for (int i = 0; i <= n; i++)
    {
        Arr[i][0] = 0;
    }
    for (int i = 0; i <= L; i++)
    {
        Arr[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= L; j++)
        {
            if (l[i - 1] > j)
            {
                Arr[i][j] = Arr[i - 1][j];
            }
            else
            {
                Arr[i][j] = Arr[i - 1][j] > v[i - 1] + Arr[i][j - l[i - 1]] ? Arr[i - 1][j] : v[i - 1] + Arr[i][j - l[i - 1]];
            }
        }
    }

    // printing Array...........

    for (int i = 0; i <= n; i++)
    {
        printf("\n");
        for (int j = 0; j <= L; j++)
        {
            printf(" %d ", Arr[i][j]);
        }
    }
    // to print the length of Rod that are chossen......

     i = n;
     j = L;
    printf("\n lenth Are:-");
    while(i>0&&j>0){
        if (Arr[i][j] != Arr[i - 1][j])
        {
            printf("%d ", l[i-1]);
            j-=l[i-1];
        }
        i--;
    }

    return Arr[n][L];
}
int main()
{
    int l[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int v[8] = {1, 5, 8, 9, 10, 17, 17, 20};
    int A;
    A = Rod_cut(l, v, 8, 8);
    printf("\nMax Value:-%d", A);

    return 0;
}