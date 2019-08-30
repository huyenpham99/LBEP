#include<stdio.h>
int main (){
	int n;
	printf("nhap n=\n");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("nhap phan tu a[%d]",i);
		scanf("%d",&a[i]);
		int j=0;
		while(j<i){
			if(a[i]==a[j]){
				printf("nhap lai phan tu a[%d]=");
				scanf("%d",&a[i]);
				j=0;
			}else{
				j++;
			}
		}
	}
	return 0;
}
