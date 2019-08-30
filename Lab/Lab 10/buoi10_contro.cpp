#include<stdio.h>
#include<iostream> //thu vienn ho tro dich bit

int main(){
	int x=10;
	int *p;
	std::cout<<x;    //mon sau se noi chi tiet
	
	printf("\n");
	std::cout<<&x;
	
	printf("\n");
	p=&x; //ten cua ten trom no da co dia chi cua x
	
	std::cout<<p;
	printf("\n");
	
	std::cout<<*p;  //vao nha lay 10tr
	printf("\n");
	(*p)=0; // giong voi x++
	std::cout<<x;
	printf("\n");
	return 0;
			
	
	
}
