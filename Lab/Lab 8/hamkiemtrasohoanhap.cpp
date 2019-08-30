//kiem tra mot so co hoan hao hay khong
//tim so nghich dao cua mot so
#include<stdio.h>
bool kiem_tra_so_hoan_hao(int n){
	int tong=0;
	
	for(int i=1; i<n;i++){
		if(n%i==0){
			tong+=i;
		}
	}
	if(tong==n){
		return true;
	} return false;
	
}


int tim_so_nghich_dao(int n ){
	int tg=0;
//	if(n<10){
//		printf("so nghich dao cua %d la %d",n,n);
//	}
//	if(n>10){
	while(n!=0){
	
		tg=10*tg + n%10;
		n/=10;	
	}
	return tg;
}

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	if(kiem_tra_so_hoan_hao(n)){
		printf("%d la so hoan hao\n",n);
	} else{
		printf("%d khong la so hoan hao\n",n);
	}
	printf("so nghich dao cua %d la %d",n,tim_so_nghich_dao( n ));
		return 0;
}
