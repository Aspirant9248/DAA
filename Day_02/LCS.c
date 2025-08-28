// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int max(int a, int b)
{

    return a > b ? a : b;
}
int LCD(char *A, char *B, int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    if (A[a - 1] == B[b - 1])
        return 1 + LCD(A, B, a - 1, b - 1);
    else
        return max(LCD(A, B, a - 1, b), LCD(A, B, a, b - 1));
}
int main()
{

    char A[50];
    printf("enter the first string :-");
    scanf("%[^\n]", A); // special for taking input of string
    getchar(); // need if we donot need extra Gap in the second scanf
    
    char B[50];
    printf("enter the second string :-");
    scanf("%[^\n]", B); // Gap is menadatory  or Add the getchar above....

    int l;
    l = LCD(A, B, strlen(A), strlen(B));
    printf("%d", l);
}