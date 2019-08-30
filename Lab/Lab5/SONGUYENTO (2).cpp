#include<stdio.h>
#include<math.h>
int main(){

	long int i,n;
	int dem=0;
	printf("nhap so n:\n",n);
	scanf("%ld",&n);
	
	if(n >=1 && n <= 3){
	printf("%ld la so nguyen to",n);
	return 0;
}

	if(n%2==0){
		printf("%ld khong la so nguyen to",n);
		return 0;
	}
	for(i=3; i<=sqrt(n);i+=2){
		if(n%i==0){
			dem++;}
	 if(dem>1){
		break;
}
}
	 if(dem==0){
	printf("%ld day  la so nguyen to\n",n);
		}else {
			printf("%ld  khong la so nguyen to\n",n);
		
}
	return 0;
}
