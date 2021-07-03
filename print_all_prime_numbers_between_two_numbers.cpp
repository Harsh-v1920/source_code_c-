#include<iostream>
using namespace std;
int main(){
    int num1,num2,i,j,k;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    for(i=num1;i<num2;i++){
        j=2;
        while(i>j){
            if(i%j==0){
                i++;
            }
            else{
                j++;
            }
            

        }
        cout<<i<<endl;
    }


    return 0;
}