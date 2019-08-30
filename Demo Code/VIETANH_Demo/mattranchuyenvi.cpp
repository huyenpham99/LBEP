//nhap ma tran 4x3, tim ma tran chuyen vi cua ma tran do
#include<stdio.h>
int main(){
	int a[4][3]; 
	int b[3][4];
	
	for(int i=0; i<4;i++){
		for(int j=0; j<3; j++){
			printf("a[%d][%d]", i,j);
			scanf("%d", &a[i][j]);
		}
	}
		
	for(int i=0; i<4;i++){
		for(int j=0; j<3; j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("====================\n");
	printf("\n");
	
	printf("ma tran chuyen vi cua ma tran a[4][3] la:\n");
	for(int j=0; j<3; j++){
		for(int i=0; i<4;i++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	
}
