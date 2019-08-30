#include<stdio.h>
void in_mang(int x[], int n){
	for(int i=0; i<n;i++){
		printf("%d\n",x[i]);
	}
}
void in_ma_tran(int mt[][3], int n){
	for(int i=0; i<n;i++){
		for(int j=0; j<3; j++){
			printf("%3d", mt[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a[5]={2,3,41,8,1};
		printf("\n mang vua nhap\n");
	in_mang(a,5);
	int b[10]={1,2,3,4,5,6,7,8,9,10};
	printf("\n mang vua nhap\n");
	in_mang(b,10);
	int mt1[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
	printf("ma tran vua nhap:\n");
	in_ma_tran(mt1,4);
	return 0;
}
