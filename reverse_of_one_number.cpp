#include<iostream>
using namespace std;
int main(){
	int num,sum=0,rem;
	cout<<"Enter any number : ";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	cout<<"The reverse of the number is "<<sum;
	
	
	return 0;
}
