#include<iostream>
using namespace std;
int main(){
	int num,i,rem,temp;
	cout<<"Enter any number : ";
	cin>>num;
	temp=num;
	while(num!=0){
		rem=num%10;
		cout<<rem;
		num=num/10;
	}
	
	return 0;
}
