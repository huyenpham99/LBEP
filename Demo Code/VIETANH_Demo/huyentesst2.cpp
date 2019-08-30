#include<stdio.h>

	int main(){
		int a[10];
		printf("input 10 numbers\n");
		printf("================\n");
		for(int i=0; i<10;i++){
			printf("+ number %d: ", i+1); scanf("%d", &a[i]);
		}
		printf("\n\n\n");
		printf("result:\n");
		printf("================\n");
		for(int i=9; i>=0;i--){
			if(i==0){
				printf("%3d", a[i]);
			} else{
				printf("%3d", a[i]);
			}
		}
	}
