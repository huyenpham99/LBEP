//khai bao 2 bien in ra tong hieu cua  2 bien con tro 
#include<stdio.h>

int main(){
	int x;
	int y;
	int *p;
	int *q;
	p=&x;
	q=&y;
	printf("nhap x= ");
	scanf("%d",p);
	printf("nhap y= ");
	scanf("%d",q);
	printf("tong: %d \n",*p+*q);
	printf("hieu:%d \n",*p-*q);
	
	
	
	
	return  0;
}
