#include<stdio.h>
int stair(int n){
    if(n==1||n==2)
    {
        return n;
    }
        else  {

            return stair(n - 1) + stair(n - 2);
        }
}
int main(){
    int n,res;
    printf("enter the number of stair...:-");
    scanf("%d", &n);
    res = stair(n);
    printf("%d", res);
}