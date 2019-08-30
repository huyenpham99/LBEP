#include <stdio.h>

int main () {
	int a;
	printf("nhap mot so tu ban phim:");
	scanf("%d",&a);
	
	if(a%2==0){
		//nhung viec lam khi Yes
		printf("a la so chan");
		printf("ket thuc ct");
	} else{
	//nhung viec lam khi No
		printf(" a la so le");
	}
	return 0;
}
