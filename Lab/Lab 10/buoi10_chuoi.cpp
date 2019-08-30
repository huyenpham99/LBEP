#include<stdio.h>
int main(){
	int a[5]={6,7,8,9,10};
	printf("a[2]=%d\n",a[2]);
	printf("a[2]=%d\n",*(a+2));
	printf("a[0]=%d\n",*a);
	
	char s[10];
	scanf("%s",s);
	printf("chuoi vua nhap :%s\n",s);
	
	return 0;
}
