#include<iostream>
using namespace std;
int main(){
    int num,sum;
    sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    while (num>=0)
    {
        sum=sum+num;
        cout<<"The required sum is "<<sum<<endl;
        cout<<"Enter the number : ";
        cin>>num;

        /* code */
    }
    


    return 0;
}