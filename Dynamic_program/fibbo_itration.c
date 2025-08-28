#include<stdio.h>
int main(){
    int a=0, b=1, c,n;
    printf("enter the value of n till you want print:-");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for (int i = 3; i <= n;i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
}
