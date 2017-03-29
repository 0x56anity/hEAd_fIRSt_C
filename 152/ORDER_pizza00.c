	#include <stdio.h>
#include <unistd.h>
// a = awesomeness 琌玓粂慌琅次伐翴硓種
int main(int argc, char *argv[])
{
	char *delivery = "";
	int thick = 0, count = 0;
	char ch;
	
	while((ch = getopt(argc, argv,"d:t")) != EOF)
	printf("%d\n", argc);
		switch (ch){
			case 'd':
				delivery = optarg; //d: 把计  optarg跑计赣ま计' 
				break;
			case 't':
				thick = 1;;
				break;
			default:
				fprintf(stderr, "Unknown option: '%s'\n", optarg);
				return 1;			
		}	
	argc -= optind;  //opting = ㏑计 
	argv += optind;	
	
	if (thick)
		puts("Thick crust.");
	
	if (delivery[0])
		printf("To be delivered %s. \n", delivery);
		
	puts("Ingredients:");
	
	for (count = 0; count < argc ;count++)
		puts(argv[count]);
	
		
	return 0;	
}
