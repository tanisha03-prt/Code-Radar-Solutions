// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num =1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("%d ",num);
            num+=1;
        }
        printf("\n");
    }
}