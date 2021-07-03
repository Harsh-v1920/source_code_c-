#include<iostream>
using namespace std;
int main(){
	int num,a=0,b=1,sum,i;
	cout<<"Enter the number you want to continue the fibonacci series : ";
	cin>>num;
	cout<<a<<" "<<b<<" ";
	sum=a+b;
	for(i=1;i<=num;i++){
		sum=sum+i;
		cout<<sum<<" ";
	}
	
	
	return 0;
}
