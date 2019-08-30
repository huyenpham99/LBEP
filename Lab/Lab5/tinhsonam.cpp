#include<stdio.h>

int main(){
	
	int T=1000, s=8,n=0;
	//while(T<2000){
	//	T=T+ s*T/100;
	//n++;
//	} printf(" so nam de  thu duoc 2000  :% d\n",n);
	do{ T=T+ s*T/100;
		n++;
	} while(T<2000);
	printf(" so nam de  thu duoc 2000  :% d\n",n);
	
	
	
	return 0;
	
}
