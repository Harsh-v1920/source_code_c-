#include<iostream>
using  namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the third number : ";
    cin>>num3;
    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is greatest";
        }
        else{
            cout<<num3<<" is greatest";
        }
    }
    else if(num2>num3){
        cout<<num2<<" is greatest";
    }
    else{
        cout<<num3<<"is greatest";
    }
    return 0;
}
