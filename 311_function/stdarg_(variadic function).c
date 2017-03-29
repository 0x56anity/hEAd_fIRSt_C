#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

//ramdom errorÀH¾÷¿ù»~ 
void print_ints(int args, ...)
{
	va_list ap;
	va_start(ap, args);
	int i;
	printf("%d\n\n", sizeof(ap));
	for (i=0;i<args;i++){
		printf("atgument: %d\n", va_arg(ap, int));
	}
	va_end(ap);
}
int main(void){
	print_ints(6, 13, 7, 8, 79, 101, 32);
	
	
	
	system("PAUSE");
}
