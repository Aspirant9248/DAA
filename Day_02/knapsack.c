#include<stdio.h>
int ks(int w[],int v[],int n,int W){
    int Arr[n+1][W+1];
    for (int i = 0; i <= n;i++){
        Arr[i][0] = 0;
    }
    for (int i = 0; i <= W;i++){
        Arr[0][i] = 0;
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= W;j++){
            if(w[i-1]>j){
                Arr[i][j] = Arr[i - 1][j];
                
            }
            else{
                Arr[i][j] = Arr[i - 1][j] > v[i -1 ] + Arr[i - 1][j - w[i -1 ]] ? Arr[i - 1][j] : v[i-1 ] + Arr[i - 1][j - w[i-1 ]];
                
            }
        }
    }
    // to print array......
    for (int i = 0; i <= 3;i++){
        printf("\n");
        for (int j = 0; j <= 7;j++){
            printf("%d ", Arr[i][j]);
           
        }
    }
    printf("\n");
   

    // to print the weight...........

    int i = n, j = W;
    while (i > 0 && j > 0)
    {       
        if (Arr[i][j] != Arr[i - 1][j]){
            printf(" weight chossen Are:-%d \n", w[i - 1]);
            j -= w[i - 1];
        }
        i--;
    }
        return Arr[n][W];
}

int main(){
    int v[] = {1, 4, 5, 7};
    int w[] = {1, 3, 4, 5};
    int l;
    l=ks(w, v, 4, 7);
    printf(" Max value:%d", l);
}

