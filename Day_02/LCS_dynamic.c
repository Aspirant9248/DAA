#include<stdio.h>
#include<string.h>
int LCS(char *A,char *B,int a,int b){
    int Arr[a + 1][b + 1];
    for (int i = 0; i <= a;i++){
         Arr[i][0] = 0;
    }

    for (int i = 0; i <= b;i++){
         Arr[0][i] = 0;
    }

    for (int i = 1; i <= a;i++){
        for (int j = 1; j <= b;j++){
            if(A[i-1]==B[j-1]){
                Arr[i][j] = 1 + Arr[i - 1][j - 1];
            }
            else {
                Arr[i][j] = Arr[i - 1][j] > Arr[i][j - 1] ? Arr[i - 1][j] : Arr[i][j - 1];
            }
        }
      
    }
    return Arr[a][b];
}
int main(){
    char A[50];
    printf("enter the first string :-");
    scanf("%[^\n]", A); // special for taking input of string
    getchar();          // need if we donot need extra Gap in the second scanf

    char B[50];
    printf("enter the second string :-");
    scanf("%[^\n]", B); // Gap is menadatory  or Add the getchar above....
    int l;
    l = LCS( A, B,strlen(A), strlen(B));
    printf("%d", l);
}