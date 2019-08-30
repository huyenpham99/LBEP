#include<stdio.h>
 int main(){
 	int n;
 	printf("nhap so phan tu:\n",n);
 	scanf("%d",&n);
	int a[n];
 	
 	for(int i=1; i < n; i++){
 	printf("nhap phan tu:a[%d]\t",i);
 	scanf("%d", &a[i]);
 	bd:
 	for(int j=0; j < i; i++){ 
 		while(a[i]==a[j]){
 			printf("nhap lai gia tri:a[%d]\t ",i);
 			scanf("%d",&a[i]);
 			goto bd;
	 }
	 }
	 }
	 for (int i= 0;i<n;i++)
{
printf ("%d,",a[i]);
}
 	return 0;
 }
