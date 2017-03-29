#include <stdio.h>
//#include "encrypt.h"
//#include "checksum.h"

#include "D:/Dropbox/NoAvast/C and C++_TEST/352checksum()/355/my_object_files/encrypt.h"
#include "checksum.h"

// gcc -c enrypt.c -o encrypt.o && -c checksum.c -o checksum.o
// gcc test_code.c encrypt.o checksum.o -o test_code
int main(void)
{
	char s[] = "Speak friend and enter";
	encrypt(s);
	printf("Encrypted to '%s'\n", s);
	printf("Checksum is %i\n", checksum(s));
	encrypt(s);
	printf("Decrypted back to '%s'\n", s);
	printf("Checksum is %i", checksum(s));
}
