#include<stdio.h>
 int main() {
 	int A, B,C;
 	
 	printf("nhap so A=\n", A);
 	scanf("%d", &A);
 	
 	printf("nhap so B=\n", B);
 	scanf("%d", &B);
 	
 	printf("nhap so C=\n", C);
 	scanf("%d", &C);
 	
 	if((A>B) && (A>C)){
 		if(B>C){
 			printf("Max: %d, Min: %d", A, C);
		}else { 
		 printf("Max: %d, Min: %d", A,B);
		 }
	}else if((A>B) &&(A<C)){
		printf("Max: %d, Min: %d", C,B) ;
	}else if((A<B)&&(A>C)){
		printf("Max: %d, Min: %d",B,C );
	}else if((A<B)&&(B>C)){
		printf("Max: %d, Min: %d",B,A);	
	} else  
		printf("Max: %d, Min: %d",C,A);

	 return 0;
 	
 }
 
