#include "stdio.h"
#include "stdlib.h"
#include "string.h"
/*$>  ./categorize mermaid mermaid.csv Elvis elvises.csv the_rest.csv 
		[argv0]		[argv1]  [argv2]    [argv3]   [argv4]   [argv5]
*/
int main(int argc, char *argv[]){
	char line[80];
	
	if (6 != argc){
		fprintf(stderr, "You need to give5 arguments\n");
		return 1;
	}
//	printf("%d   %s",argc,argv);
	
	FILE *in;
	if (!(in = fopen ("spooky.csv", "r"))){
		fprintf(stderr, "Can't open the file.\n");
		return 1;		
	}
	FILE *file1 = fopen(argv[2], "w");
	FILE *file2 = fopen(argv[4], "w");
	FILE *file3 = fopen(argv[5], "w");
	
	/*
	FILE *file1 = fopen("ufos.csv", "w");
	FILE *file2 = fopen("disappearances.csv", "w");
	FILE *file3= fopen("orhers.csv", "w");
	*/
	while (fscanf (in, "%79[^\n]\n", line) == 1){

		if (strstr(line, argv[1]))
			fprintf(file1, "%s\n", line);
		else if (strstr(line, argv[3]))
			fprintf(file2, "%s\n", line); 
		else 
			fprintf(file3, "%s\n", line);
		/*
		if (strstr(line, "UFO"))
			fprintf(file1, "%s\n", line);
		else if (strstr(line, "Disappearance"))
			fprintf(file2, "%s\n", line); 
		else 
			fprintf(file3, "%s\n", line);*/
	}
	fclose (in);
	fclose (file1);
	fclose (file2);
	fclose (file3);
	
}
