//nhap vao mot chuoi va in ra chuoi dao nguoc
#include<stdio.h>
#include<string.h>
int main(){
	char s[20];
	printf("nhap chuoi:\n");
	scanf("%s",s);
	
	printf("chuoi sau khi nhap:%s\n",s);
	for(int i=0; i<s[strlen(s)]/2;i++ ){
		int tmp= s[i];
		s[i]=s[strlen(s)-i-1];
		s[strlen(s)-i-1]=tmp;
		printf("%s",s);
	}
	
	
}
