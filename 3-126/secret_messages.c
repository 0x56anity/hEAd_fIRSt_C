#include <stdio.h>

int main(){

	
	char word[10];
	int i = 0;
	while( scanf("%9s",word) == 1){
		i += 1;
		if (i % 2)
			fprintf(stdout, "%s\n", word);
		else
			fprintf(stderr, "%s\n", word);
	}
//	C:\> secret_messages.exe < sseret.txt > *.txt 2> *2.txt      */
	system("PAUSE");
	return 0;
}	
//	
