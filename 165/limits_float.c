#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
	printf("The value of INT_MAX is %i\n", INT_MAX);
	printf("The value of INT_MIN is %i\n", INT_MIN);
	printf("An int takes %d bytes\n", sizeof(int));
	
	printf("The value of FLT_MAX is %f\n", FLT_MAX);
	printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
	printf("A float takes %d bytes\n", sizeof(float));
		
	printf("The value of CHAR_MAX is %i\n", CHAR_MAX);
	printf("The value of CHAR_MIN is %i\n", CHAR_MIN);
	printf("A char takes %d bytes\n", sizeof(char));

	printf("The value of DBL_MAX is %f\n", DBL_MAX);
	printf("The value of DBL_MIN is %f\n", DBL_MIN);
	printf("A double takes %d bytes\n", sizeof(double));
	
	printf("The value of SHRT_MAX is %d\n", SHRT_MAX);
	printf("The value of SHRT_MIN is %d\n", SHRT_MIN);
	printf("A short takes %d bytes\n", sizeof(short));

	printf("The value of LNG_MAX is %llu\n", LLONG_MAX);
	printf("The value of LNG_MIN is %f\n", LLONG_MIN);
	printf("A long takes %d bytes\n", sizeof(long long));
	return 0;
}
