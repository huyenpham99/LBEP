//tinh giai thua mot so n!=1.2.3.4....n
#include<stdio.h>
int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int gt=1;
	for(int i=1; i<=n; i++){
	gt=gt*i;	
	}
	printf("%d",gt);
	return 0;
}
