 #include <stdio.h>

int main(){
	
	int s;
	printf("printf \n");
	if ( scanf("%d",&s) == 1 )
		fprintf(stderr, "fprintf");
	
	return 0;
}
