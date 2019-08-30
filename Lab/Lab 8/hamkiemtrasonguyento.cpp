#include<stdio.h>
#include<math.h>
bool kiem_tra_so_nguyen_to(int n){
	if(n<2) return false;
	if(n==2 || n==3)	return true;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return false;
		}
	}
			return true;
}

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	for(int i=0; i<n;i++){
	
	if(kiem_tra_so_nguyen_to(n)){
		
		printf("%d la so nguyen to",n);
	}
	else{
		printf("%d khong la so nguyen to",n);
	}
	return 0;
}
}
