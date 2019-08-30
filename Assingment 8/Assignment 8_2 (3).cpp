
//in ra mang da sap xep
#include<stdio.h>

void nhap(int a[], int n){
	for(int i=0; i<n;i++){
		printf("nhap phan tu a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void sap_xep_tang(int a[], int n){
	for(int i=0; i<n;i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}
	for(int i=0; i<n;i++){
		printf("%3d",a[i]);
	}
}
void sap_xep_giam(int a[], int n){
	for(int i=0; i<n;i++){
		for(int j=0; j<n-i-1; j++){
		if(a[j]<a[j+1]){
			int temp=a[j];
			a[j]=a[j+1];
				a[j+1]=temp;
		}
		}
}
	for(int i=0; i<n;i++){
		printf("%3d",a[i]);
	}
}

	

int main(){
	int n;
	printf("nhap so phan tu trong mang:\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
	printf("nhap phan tu cua mang:\n");
	scanf("%d",&a[i]);
}
		printf("sap xep tang :");
		sap_xep_tang(a,n);
		printf("\nsap xep giam :");
		sap_xep_giam(a,n);
//	xuat(a,n);
	return 0;
	
}
