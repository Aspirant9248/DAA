#include<stdio.h>
int fact(int n){
    int fact[n + 1];
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i <= n;i++){
        fact[i] = i * fact[i-1];
    }
    return fact[n];
}
int main(){
    int n;
    printf("enter the number you want fact:-");
    scanf("%d", &n);
    printf("%d", fact(n));
}