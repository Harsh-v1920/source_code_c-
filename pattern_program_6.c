#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Wrong input no pattern will be displayed");
    }
    else{
        for(int i=1;i<=n;i++){
            for(int j=0;j<=2*i-2;j++){
                printf(" ");
            }
            for(int k=1;k<=n;k++){
                printf("%d ",k);
            }
            printf("\n");
        }
    }
    return 0;
}