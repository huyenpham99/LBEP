#include<stdio.h>
 int main(){
 	int  S = 0;
 	int i;
 	int T=1000;
 	
 	for(i=1; T<=2000;i++)
 	{
 		if(i!=3){
 			T=T+S*T/100;
		 } else {
		 	continue;
		 }
	 } 
	 return 0;
 }
