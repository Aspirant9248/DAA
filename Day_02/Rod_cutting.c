#include <stdio.h>
int ks(int w[], int v[], int n, int W)
{
    int Arr[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        Arr[i][0] = 0;
    }
    for (int i = 0; i <= W; i++)
    {
        Arr[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (w[i - 1] > j)
            {
                Arr[i][j] = Arr[i-1][j];
            }
            else
            {
                Arr[i][j] = Arr[i - 1][j] > v[i-1] + Arr[i][j - w[i - 1]] ? Arr[i - 1][j] : v[i-1] + Arr[i][j - w[i - 1]];
            }
        }
    }
    // to print array......

    for (int i = 0; i <= 7; i++)
    {
        printf("\n");
        for (int j = 0; j <= 8; j++)
        {
            printf(" %d  ", Arr[i][j]);
        }
    }
    printf("\n");

// to prit the length of Road........
    int i=n, j=W;
    printf("Lenght Are:-");
    while (i>0&&j>0){
        if(Arr[i][j]!=Arr[i-1][j]){
            printf(" %d ", w[i - 1]);
            j -= w[i - 1];
        }
        else {
            i--;
        }
       
    }
        return Arr[n][W];
}

int main()
{
    int v[] = {1, 5, 8, 9,10,17,17,20};
    int w[] = {1,2,3,4,5,6,7,8};
    int l;
    l = ks(w, v, 8, 8);
    printf(" Max value:%d", l);
}
