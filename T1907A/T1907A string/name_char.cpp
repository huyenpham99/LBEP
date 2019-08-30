#include<stdio.h>
#include<string.h>
int main(){
int i, n=0; int item;
char lines[10][12]; char temp[12];
printf("enter each string on a separate line\n");
printf("type 'end' when over");
do{
	printf("string %d:", n+1);
	scanf("%s",lines[n]);
	
}
while (strcmp(lines[n++], "end"));
//to continue

		n=n-1;
		for(item =0; item<n-1; item++){
			
			for(i=item+1;i<n;i++){
				
				if(strcmp(lines[item],lines[i])>0){
					strcpy(temp, lines[item]);
					strcpy(lines[item], lines[i]);
					strcpy(lines[i],temp);
				}
			}
		}
		printf("recorded list of strings :\n");
		for(int i=0; i<n; i++){
			printf("\nstrings %d is %s",i+1, lines[i]);
		}
}

