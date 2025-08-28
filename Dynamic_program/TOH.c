#include<stdio.h>
void TOH(int n, char source, char dest, char Aux){
    if(n==1){
        printf("%c-->%c\n", source, dest);
        return;
    }
    TOH(n-1, source, Aux, dest);
    printf("%c-->%c\n", source, dest);
    TOH(n-1, Aux, dest, source);
}
int main(){
    int n;
    printf("enter the number of disc:-");
    scanf("%d", &n);
    TOH(n, 'A', 'C', 'B');
   
}