#include<stdio.h>
int add();
int or();
int xor();
int main(){
	int a,b,rem,sum=0,i,j,u,v=0,w=0;
	scanf("%d%d",&a,&b);
	u=0;
	for(i=1;i<=b;i++){
		for(j=2;j<=a;j++){
			rem=i&j;
			if(rem<u){
				printf("\n%d",rem);
			}
			else{
				u=rem;
				printf("\n%d",u);
			}
			rem=i|j;
			if(rem<v){
				printf("\n%d",rem);
			}
			else{
				v=rem;
				printf("\n%d",v);
			}
			rem=i^j;
			if(rem<w){
				printf("\n%d",rem);
			}
			else{
				w=rem;
				printf("\n%d",w);
			}
		}
	}
	return 0;
}

