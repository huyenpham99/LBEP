#include<stdio.h>
#include<math.h>
	int main(){
		int n;
		printf("nhap so n:\n",n);
		scanf("%d",n);
		for(int i=0;i<n;i++){
			for(int j=0; j<n;j++){
				if(n%i==0){
					printf("%d",j);
				}
			}
			printf("%d\t",i);
		}
		return 0;
	}
