#include <stdio.h> 
#include <string.h>
int main(){
	char gg[20];

//	scanf("%19[^\n]",&gg);
	fgets(gg, 19, stdin);
	printf("%s || %d",gg,strlen(gg));
	
	return 0;
}
