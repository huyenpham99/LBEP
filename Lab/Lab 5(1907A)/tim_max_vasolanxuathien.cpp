//10m integers, tìm max và sô lan xuat hien gia tri do trong mang
#include<stdio.h>
int main(){
	int a[10];
	for(int i=0; i<10; i++){
		printf("nhap phan tu a[%d]", i);
		scanf("%d", &a[i]);
	}
	int max=a[0];
	int dem=0;
	for(int i=0; i<10; i++){
		if(max<a[i]){
			max=a[i];
			if(a[i]==a[i+1])
		{
			dem++;
	}
		}
		
	}
	printf("gia tri lon nhat trong mang la: %d", max);
	printf("so lan xuat hien cua gia tri max:  %d", dem);
}
