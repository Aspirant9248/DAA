#include<stdio.h>
int fib(int n){
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n;i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}
int main(){
    int n;
    printf("enter the value:");
    scanf("%d", &n);
    printf("%d", fib(n));
}