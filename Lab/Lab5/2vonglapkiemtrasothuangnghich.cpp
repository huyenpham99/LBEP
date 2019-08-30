#include<stdio.h>
#include<math.h>
	 int main(){
	 	int n,m,tg;
	 	printf("nhap so n:",n);
	 	scanf("%d",&n);
	 	if(n<=10){
	 		printf("khong tim duoc so thuan nghich nao nho hon 10");
			 return 0;	
		 }
		 
	 	for(int i=1; i<=n; i++){
	 		m=i;
	 		tg=0;
	 		while(m!=0){
	 		tg=tg*10 + m%10;
	 		m/=10;
}
		 if(tg==i){
		 	printf("%d\n",tg);
		 }
}
	 	return 0;
	 	
	 }
