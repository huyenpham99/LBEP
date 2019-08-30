#include <stdio.h>
 int main(){
 	
 	int a,b;
 	 printf("nhap a:\n");
 	 scanf("%d",&a);
 	 printf("nhap b:\n");
 	 scanf("%d",&b);
 	 
 	 if(a>b &&b!=0){
 	 		printf("%d / %d =%d",a,b,a/b);
 	 		
		  } else if(a>b && b==0) {
		  printf("khong chia duoc cho 0 ");
		  } else {
	  printf("%d *%d = %d", a,b,a*b);
	   	  }
 	return 0;
}
