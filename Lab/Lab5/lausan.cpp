#include<stdio.h>
 int main(){
 	int i;
 	for(i=0; i<10;i++){
 		printf("bat dau lau san tang thu:%d\n",i); 
 		if(i==6){
 			continue;
		 } printf("lua xong san tang thu %d\n",i);
	 }
	 return 0;
 }
