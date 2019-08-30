//nhap vao mot chuoi va in ra chuoi dao nguoc
#include<stdio.h>
#include<string.h>
int main(){
	char s1[20];
	printf("nhap chuoi:\n");
//	scanf("%s",s1);
	gets(s1);
	printf("chuoi da nhap: %s\n",s1);
	printf("chuoi dao nguoc:%s\n",strrev(s1));
	return 0;
}
