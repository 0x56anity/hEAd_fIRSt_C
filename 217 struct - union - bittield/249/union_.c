#include <stdio.h> 

int main(void){
	typedef union{
		short count;
		float weight;
		float volune;
	}quantity;
//	quantity q = {.fir = 17, .volume = 9.2};
//	quantity p = {.fir = 17, .volume = "Martin Garrix", .weight = 87.99};
	quantity p = {4, .weight = 1.5};
//	p.volume = 3.7;
	
	
	printf("%d\n\n\n\n",sizeof(p));
//	puts(q.count);
//	printf("%f\n", q.volume);	
//	p.volume = "Martin Garrix";
	printf("%d   %f   %f", p.count, p.weight, p.volune);
	
}
