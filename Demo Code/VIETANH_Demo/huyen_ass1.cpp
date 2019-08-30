//nhap 2 so a,b neu a>b thi a/b, a<b thì a*b
#include<stdio.h>
int main(){
	float a,b;
	printf("nhap so thu nhat:\n");
	scanf("%f", &a);
	printf("nhap so thu hai:\n");
	scanf("%f",&b);
	if(b!=0){
		if(a>b){
		printf("%.0f / %.0f= %f", a,b,a/b);
	}else{
		printf("%.0f * %.0f =%.0f",a,b,a*b);
	}
	}else{
		printf("vui long khong nhap so 0");
		}
}
