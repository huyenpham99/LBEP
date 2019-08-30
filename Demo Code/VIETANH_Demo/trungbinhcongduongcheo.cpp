//nhap ma tran 4*4 tinh trung binh cong duong cheo
#include<stdio.h>
int main(){
	int a[4][4];
	int tong=0;
	float tbc;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("nhap phan tu a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("%3d",a[i][j]);
		}	
		printf("\n");
	}
	for(int i=0; i<4;i++){
		for(int j=0; j<4; j++){
			if(i==j){
				tong+=a[i][j];
			}
		}
	}
	
		tbc=(float)tong / 4;
	printf("trung binh cong duong cheo: %.2f", tbc);
}
