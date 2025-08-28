#include<stdio.h>
void print(int n){
    if(n==0) return ;
    print(n - 1);
    //if(n%2==0)          if want to print only even number between 1 to n 
    printf("%d ", n);
}
int main(){
    int n;
    printf("enter the number of disc:-");
    scanf("%d", &n);
    print(n);
}