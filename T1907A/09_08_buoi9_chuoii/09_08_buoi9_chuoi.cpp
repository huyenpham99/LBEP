#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],s2[20];
	printf("nhap chuoi1:\n");
	scanf("%s",s1);
	printf("nhap chuoi1:\n");
	scanf("%s",s2);
	printf("chuoi1 sau khi nhap: %s\n",s1);
//	strcat(s1,s2);
//	printf("chuoi1  sau khi dung ham: %s\n",s1);
	printf("ket qua: %d",strcmp(s1,s2));
	if(strcmp(s1,s2)==0){
		printf("2 chuoi giong nhau\n");
	}
	printf("vi tri cua ky tu h trong chuoi:%ld\n",strchr(s1,'h')-s1);
	strcpy(s1,s2);
	printf("chuoi s1 sau khi copy:%s\n",s1);
	printf("kich thuoc chuoi 1 la:%ld\n",strlen(s1));
	for(int i=0; i<strlen(s1);i++){
		if(s1[i]>=97 && s1[i]<=122){
			printf("%c",s1[i]-32);
		}
	}
	
	for(int i=strlen(s)-1;i<=0;--i){
		
	}
}

