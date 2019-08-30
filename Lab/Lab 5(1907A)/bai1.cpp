//viet chuong trinh nhap du lieu cho 1 mang so nguyen int arr gom 10 pt, in ra cac phan tu o vi tri chan(0,2,4...)
#include<stdio.h>
int main(){
	int arr[10];
	printf("cac phan tu cua mang la:\n");
	for(int i=0; i<10; i++){
		printf("nhap phan tu a[%d]\n",i);
		scanf("%d",&arr[i]);
	//	printf("%d,",arr[i]);
	}
	printf("===============\n");
	printf("cac phan tu o vi tri chan cua mang la:\n");
	for(int i=0; i<10; i++){
		if(i%2==0){
			printf("%2d,", arr[i]);
		}
	}
}
