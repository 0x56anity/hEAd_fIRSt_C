#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char *delivery = "";
	int thick = 0, count = 0, hp = 0;
	char ch;
	
	while((ch = getopt(argc, argv,"hd:t")) != EOF)
		switch (ch){
			case 'd':
				delivery = optarg; //d: 參數 
				break;
			case 't':
				thick = 1;
				break;
			case 'h':
				hp = 1;
				break;
			default:
				fprintf(stderr, "Unknown option: '%s'\n", optarg);
				return 1;			
		}	
//	printf("%d\n",argc);
	argc -= optind;  //opting = 命令個數 
	argv += optind;	
//	printf("%d\n",argc);
	if (thick)
		puts("Thick crust.");
	
	if (delivery[0])
		printf("To be delivered %s. \n", delivery);
		
	if (hp)		
		puts("is help :(");
		
	puts("Ingredients:");
	
	for (count = 0; count < argc ;count++)
		puts(argv[count]);
		
	return 0;	
}
