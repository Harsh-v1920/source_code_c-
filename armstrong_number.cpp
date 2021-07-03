#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num,n=0,sum=0,temp,rem,i;
	cout<<"Enter any number : ";
	cin>>num;
	i=num;
	temp=num;
	while(num!=0){
		rem=num%10;
		n++;
		num=num/10;
	}
	while(temp!=0){
		rem=temp%10;
		sum=sum+pow(rem,n);
		temp=temp%10;
	}
	if(sum==i)
	cout<<"Armstrong number";
	else
	cout<<"Not an armstrong number";

	return 0;
}
