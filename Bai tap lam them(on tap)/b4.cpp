//nhap tu ban phim den khi so chan thi dung

#include<stdio.h>

int main(){
	int n;
	do{
		printf("nhap so:\n");
		scanf("%d",&n);
	}	
	while(n%2!=0);

	printf("hoan thanh");
		
	return 0;
	
}

