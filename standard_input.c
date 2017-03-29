#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
int main(){

	char s0[]="dysfunctional";
	char s1[]="fun";
	while ( scanf (" %20[0-9&&a-z&&A-Z]",&s0) ){
	printf("%s\n",s0);
	
	};

	
	return 0;

}

/*
您可以使用%[0-9]指定取得0至9的字元，使用%[A-z]指定取得ASCII表中的A到z的字元，
如果要排除的話，則使用^，例如%[^ABC]會取得ABC字元以外的所有字元。

standard 標準  input  標準
*/
