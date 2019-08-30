#include <stdio.h>
int main(){
	int x = 1;
	static int tally = 0;
	for(x=0; x<10; x++){
		if(x%2 == 0)
			tally++;
}
printf("There are %d tally.\n", tally);
}

