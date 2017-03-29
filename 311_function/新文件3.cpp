#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> 
enum drink{
	MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};

typedef struct lfa{
	double pirce
};

void (*bmw) 

double total(int args, ...)
{
	double total = 0;
	int i=0;
	va_list list;
	va_start(list, args);
	for (i=0;i<args;i++){
		total+=price(va_arg(list, enum drink));
//		printf("%.3f   ",price(va_arg(list, enum drink));
	}
	va_end(list);
	
	return total;
}

int main(void){
	
}
