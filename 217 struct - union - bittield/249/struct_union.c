#include <stdio.h>
int main(void){
	typedef union{
		float weight;
		short count;
		
		float volune;
	}quantity;
	
	typedef struct{
		const char *name;
		const char *country;
		quantity amount;
	}fruit_order;
	
//	fruit_order apples = {"apples", "England", .amount.volune = 9.2, .amount.weight = 4.2};
	fruit_order apples = {"apples", "England", {9.2, 4.2}};
	printf("This order contains %2.2f lbs of %s\n", apples.amount.volune, apples.name);
}
