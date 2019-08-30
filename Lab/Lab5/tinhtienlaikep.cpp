#include<stdio.h>

int main(){
	
	int T=1000, s=8,n=1;
	while(n<=10){
		T=T+ s*T/100;
		n++;
	} printf(" so tien thu duoc:% d\n",T);
	
	
	
	
	return 0;
	
}
