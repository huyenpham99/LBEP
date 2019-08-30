//nhap vao mang n so , in ra mang so do
#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n;i++){
		printf("nhap phan tu:\n");
		scanf("%d",&a[i]);
	}
	printf("cac phan tu cua mang:\n");
	for(int i=0; i<n;i++){
		printf("%d\t", a[i]);
	}
	return 0;
}
