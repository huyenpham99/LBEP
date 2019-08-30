//kiem tra ba canh co phai mot tam giac, neu dung tinh chu vi va dien tich tam giac
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,cv;
	float p,s;
	
	printf("nhap canh thu nhat:\n");
	scanf("%d",&a);
	printf("nhap canh thu hai:\n");
	scanf("%d",&b);
	printf("nhap canh thu ba:\n");
	scanf("%d", &c);
	
	if((a+b)>c && (a+c)>b && (b+c)>a){
		printf("day la mot tam giac");
		cv= a+ b+c;
		p= (float)(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("chu vi: %d\n",cv);
		printf("dien tich: %.0f\n",s);
	}else{
		printf("day khong phai la tam giac\n");
	}
}
