#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(num%2==0){
        if(num%3==0){
           cout<<"Number is divisible by 2 and 3 both";
        }
        else{
            cout<<"Number is divisible by 2 only";
        }
    }
    else{
       cout<<"Number is divisible by 3 only"; 
    }

return 0;
}
