#include<stdio.h>

 int main() {
 
  int a;
  printf("nhap so a:");
  scanf("%d", &a);
  
  int b;
  printf("nhap so b:");
  scanf("%d", &b);
  
  int c;
  printf("nhap so c:");
  scanf("%d", &c);
  
  if((a>b) && (a>c)) {
  	if(b>c) {
  printf(" a max, c min"); 
} else{
	printf("a max, b min");
}
}
else if((a>b) &&(a<c)) {
	printf("c max, b min");
}
else if((a<b) &&(a>c)){
	printf("c min, b max");	
} 
else if((a<b)&&(a<c)){
	if(b>c) {
	printf("a min, b max", &a);}
}
	else{
	printf("a min, c max");
}
	return 0;
}
  
