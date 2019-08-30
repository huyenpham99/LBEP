#include<stdio.h>
int main(){
	int n;
	printf("nhap vao so bat ki:\n");
	scanf("%d",&n);
	switch(n){
		case 2:
			printf("day la thu hai\n");
			break;
		case 3:
			printf("day la thu ba\n");
			break;
		case 4:
			printf("day la thu tu\n");
			break;
		case 5:
			printf("day la thu nam\n");
			break;
		case 6:
			printf("day la thu sau\n");
			break;
		case 7:
			printf("day la thu 7\n");
		case 8:
			printf("day la chu nhat\n");
			break;
		default:
			printf("day khong phai thu trong tuan!\n");
	}
	
}
