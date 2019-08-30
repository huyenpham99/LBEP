//viet chuong trinh tinh  S = 1 + 1/2 + 1/3 + … + 1/N
#include<stdio.h>
int main(){
	int n;
	float S=0;
	printf("nhap n=\n");
	scanf("%d",&n);
	for(int i =1; i<=n;i++){
		S+=1/(float)i;
	}
	printf("%f",S);
	
	return 0;
}

