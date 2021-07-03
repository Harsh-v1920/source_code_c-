#include<iostream>
using namespace std;
int main(){
    int sum,i,num;
    sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    cout<<"The sum of the natural numbers upto "<<num<<" = "<<sum;
    

    return 0;
}