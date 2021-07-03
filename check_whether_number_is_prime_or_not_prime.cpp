#include<iostream>
using namespace std;
int main(){
    int num,i;
    i=2;
    cout<<"Enter a number : ";
    cin>>num;
    if(num<=0){
        cout<<"Wrong input";
    }
    else{
        while(i<num){
            if(num%i==0){
                cout<<"Not a prime number";
                break;
            }
            else{
                i++;
            }
        }
        if(num==i)
        cout<<"Prime Number";
    }

    return 0;
}