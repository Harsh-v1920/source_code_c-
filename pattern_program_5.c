#include<stdio.h>
int main(){

    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("Wrong input no pattern will be displayed");
    }
    else{

        for(int i=1;i<=n;i++){
            for(int j=1;j<=2*(n-i);j++){
                printf(" ");

            }
            for(int k=1;k<=i;k++){
                 printf("%d ",k);

            }
            printf("\n");
        }
    }
    return 0;
}