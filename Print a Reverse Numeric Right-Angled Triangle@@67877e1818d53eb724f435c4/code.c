// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        int num=1;
        for(int j=1;j>=1;j--){
            printf("%d ",num);
            num+=1;
        }
        printf("\n");
    }
}