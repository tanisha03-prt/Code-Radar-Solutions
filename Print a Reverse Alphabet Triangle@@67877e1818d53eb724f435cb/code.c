#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        char letter ='A';
        for(int j=i;j>=n;j--){
            printf("%c ",letter);
            letter++;
        }
        printf("\n");
    }
}