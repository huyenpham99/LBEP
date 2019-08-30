#include<stdio.h>

int sum(int a, int b){
	return a+b;
}
int substraction(int a, int b){
	return a-b;
}
int multiplication(int a, int b){
	return a*b;
}
int division(int a, int b){
	return a/b;
}
 int main(){
 	int a,b;
 	int choose;
 	do{
 		printf("1. Input Number\n");
 		printf("2.Calculate Sum\n");
 		printf("3.Calculate Substraction\n");
 		printf("4.Calculate Multiplition\n");
 		printf("5.Calculate Division\n");
 		printf("6.Exit\n");
 		printf("---\n");
 		printf("Choose:\n"); scanf("%d",&choose);
 	switch(choose){
 	case 1:
		printf("1.Input Number\n");
		printf("a="); scanf("%d",&a);
 		printf("b="); scanf("%d",&b);
 		printf("\n\n\n");
 		break;
 	case 2:
 		printf("2.Calculate Sum\n");
 		printf("Result:  %d + %d = %d",a,b,sum(a,b));
 		printf("\n\n\n");
 		break;
 	case 3:
 		printf("3.Calculate Substraction\n");
 		printf("Result:  %d - %d = %d",a,b,substraction(a,b));
 		printf("\n\n\n");
 		break;
 	case 4:
 		printf("4.Calculate Multiplication\n");
 		printf("Result:  %d * %d = %d",a,b,multiplication(a,b));
 		printf("\n\n\n");
 		break;
 	case 5:
 		printf("5.Calculate Sum \n");
 		printf("Result:  %d / %d = %d",a,b,sum(a,b));
 		printf("\n\n\n");
 		break;
 	case 6:
 		printf("6.Exit \n");
 		printf("Exit. \n");
 		printf("\n\n\n");
 		break;
 	Default:
 		printf("Try again!\n");
 		break;
 	
 		
 	}
	} while(choose!=6);
 }
