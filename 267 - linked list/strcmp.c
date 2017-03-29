int stringCompare(char *, char *)
int stringCompare(char *x, char *y){
	for ( ; *x == *y; x++, y++)
		if (*x=='\0')
			return 0;
		return *x-*y;		
}

