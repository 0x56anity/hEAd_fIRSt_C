#include "encrypt.h"
void encrypt(char *message)
{
	while (*message) {
//		puts(message);
		*message = *message ^ 31;
		message++; 
	}
}
