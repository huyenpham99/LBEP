//nhap ban phim den bao gio so chan thi dung
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int i;
	for(int i=1; i<n; i++){
		while((i % 2) == 1){
			printf("moi ban nhap so:",n);
			scanf("%d",&i);
			for(int j=0; j<i; j++){
				if(j % 2==1){
					break;
				}
			}
		}
}
printf("%d",i);
	return 0;
}
