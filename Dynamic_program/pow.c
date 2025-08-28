#include<stdio.h>
int Pow(int n,int m){
    if(m==0)
        return 1;

    else
        return n * Pow(n, m - 1);
}
int main(){
    int a, b;
    printf("a ka kitna power :-");
    scanf("%d%d", &a, &b);
    int n=Pow(a, b);
    printf("%d", n);
}