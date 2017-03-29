#include <stdio.h>	
	typedef enum{
		COUNT, POUNDS, PINTS
	}unit_of_measure;
	
	typedef union{
		short count;
		float weight;
		float volune;
	}quantity;
	
	typedef struct{
		const char *name;
		const char *country;
		quantity amount;
		unit_of_measure units
	}fruit_order;
	
	void display(fruit_order order)
	{
		printf("This order contains ");
		if (order.units == PINTS)
			printf("%2.2f pints of %s\n", order.amount.volune, order.name);
		else if (order.units == POUNDS)
			printf("%2.2f lbs of %s\n", order.amount.weight, order.name);
		else 
			printf("%i %s\n", order.amount.count, order.name);
	}
	int main(void){
		fruit_order apples = {"apples", "England", .amount.count = 144, COUNT};
		fruit_order strawberries = {"strawberries", "Spain", .amount.weight = 7.6, POUNDS};
		fruit_order oj = {"orang juiice", "U.S.A", .amount.volune = 10.5, PINTS};
		
		display(apples);
		display(strawberries);
		display(oj);
		
	}

