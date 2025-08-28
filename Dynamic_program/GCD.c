#include<stdio.h>
int Gcd(int a,int b){
    if(b==0)
        return a;
    
    else
    {

        Gcd(b, a % b);
    }
          
}
int main(){
    int n;
    n=Gcd(18,48);

    printf("%d", n);
}