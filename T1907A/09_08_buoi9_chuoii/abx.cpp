#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	printf("Ban hay nhap chuoi :\n");
	gets(s);
	printf("Chuoi dao nguoc la la : %s \n",strrev(s));
	return 0;
}
