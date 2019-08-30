//nhap mang so nguyen 5 phan tu, sao chep toan bo cac phan tu cua mang nay sang mang so thuc float arr gom 10 phan tu, 
//cac phan tu con lai cua mang duoc bang 0; hien thi toab bo cac phan tu 2 mang tren

#include<stdio.h>
#include<string.h>
int main(){
	int a[5];

	for(int i=0; i<5; i++){
		printf("nhap phan tu a[%d]\n",i);
		scanf("%d", &a[i]);
	
	}
	for(int i=0; i<5; i++){
		printf("%d", a[i]);
	}
	float arr[10]={0,0,0,0,0,0,0,0,0,0};
	
}
