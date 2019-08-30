//string example
#include<stdio.h>
#include<string.h>
int main(){
	//khai bao bien:
	char str1[100], str2[100];
	printf("nhap chuoi str1\n");
	gets(str1);
	printf("nhap chuoi str2:\n");
	gets(str2);
	if(strcmp(str1,str2)==0){
		printf("hai chuoi bang nhau\n");
	}else if(strcmp(str1,str2)<0){
		printf("\nstr1 nho hon str2");
	}else{
		printf("\n str1 lon hon str2");
	}
	
}
