#include<stdio.h>
 int main(){
 	int n;
 	printf("ban nhap n:\n",n);
 	scanf("%d",&n);
 	if(n>=2 && n<=7){
 		printf("hom nay la thu %d",n);
 		}else if(n==8){
 			printf("hnay la chu nhat");
	 }else {
	 	printf("khong phai ngay trong tuan, moi nhap lai!");
	 }
	 
 	
 	return 0;
 	
 }
