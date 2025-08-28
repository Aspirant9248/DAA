#include<stdio.h>
int sqsum(int n){
    if(n==0)
        return 0;

        else
            return (n * n) + sqsum(n - 1);

        
}
int main(){
    int n = sqsum(5);
    printf("%d", n);
}