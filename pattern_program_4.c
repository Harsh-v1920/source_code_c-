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
        for (int i=1;i<=n ;i++)
        {
            for(int j=n;j>=i;j--){
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    

    return 0;
}