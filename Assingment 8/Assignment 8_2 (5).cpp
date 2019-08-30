//tim hang co tong gia tri lon nhat trong ma tran 4x4
#include<stdio.h>

void nhap(int a[][4],int m ,int n){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
		printf("nhap phan tu a[%d][%d]", i,j);
		scanf("%d", &a[i][j]);
		}
	}
}

void xuat( int a[][4],int m, int n){
	for(int i=0;i<4; i++){
		for(int j=0; j<4;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
}
void tinh_tong_hang(int a[4][4], int m, int n ){
	int S1;
for(int i=0;i<4;i++){
		int S1 = 0;
		for(int j=0;j<4;j++){
			S1+=a[i][j]	;
			
		}
		printf("tong hang %d\t",S1);
}
//for(int i=0; i<4;i++){
//	printf("tong hang %d",S1);

			
}
int tim_hang(int a[4][4], int m, int n){
		int max=0;
		int hang = 0;
	for(int i=0;i<4;i++){
		int S1 = 0;
		//int hang=0;
		for(int j=0;j<4;j++){
			S1+=a[i][j]	;		
	}
		if(max < S1){
			max=S1;
			hang=i;
		}
	}
		return hang;
			
}

	int main(){
	int a[4][4];
	int m,n;
	int hang;
	for(int i=0;i<4; i++){
		for(int j=0; j<4;j++){	
		printf("nhap phan tu a[%d][%d]",i,j);
	scanf("%d",&a[i][j]);
		}
	}
	xuat(a,m,n);
	tinh_tong_hang(a,m,n);
	printf("hang co tong lon nhat %d",tim_hang(a,m,n)+1);
	return 0;
}

