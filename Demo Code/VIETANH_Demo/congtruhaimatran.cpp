//nhap vao 2 ma tran  4x3, in ra ket qua cong tru hai ma tran
#include<stdio.h>
int main(){
	int a[4][3], b[4][3], c[4][3], d[4][3];
	
	for(int i=0; i<4; i++){
		for(int j = 0; j<3; j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\n");
		for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("nhap phan tu b[%d][%d]",i,j);
			 scanf("%d",&b[i][j]);
		}
	}
		printf("\n");
		printf("ma tran a[4][3]:\n");
		for(int i=0; i<4; i++){
		for(int j = 0; j<3; j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("ma tran b[4][3]:\n");
		for(int i=0; i<4; i++){
		for(int j = 0; j<3; j++){
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
		for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			c[i][j]=a[i][j] + b[i][j];
		}
	}
		for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			d[i][j]= a[i][j] - b[i][j];
		}
	}
		printf("ket qua cong hai mai tran:\n");
		for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
		printf("%3d", c[i][j]);	
	}
		printf("\n");
	}

		printf("ket qua tru hai mai tran:\n");
		for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
		printf("%3d", d[i][j]);	
		}
		printf("\n");
		}			
}
