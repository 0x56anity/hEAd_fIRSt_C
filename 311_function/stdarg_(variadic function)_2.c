#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> 
enum drink{
	MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};

double price(enum drink d)
{
	switch (d) {
		case MUDSLIDE:
			return 6.79;
		case FUZZY_NAVEL:
			return 5.31;
		case MONKEY_GLAND:
			return 4.82;
		case ZOMBIE:
			return 5.89; 
	}
	return 0;
}

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
//	print_ints(6, 13, 7, 8, 79, 101, 32);
//	printf("Prince is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));

	printf("%d", sizeof(va_list));
	printf("Prince is %.2f\n", total(2, MONKEY_GLAND, MUDSLIDE));
	printf("Prince is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
	printf("Prince is %.2f\n", total(1, ZOMBIE));
	
//	system("PAUSE");
}
