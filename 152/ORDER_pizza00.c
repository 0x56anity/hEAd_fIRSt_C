	#include <stdio.h>
#include <unistd.h>
// a = awesomeness �O�Z�y�A���šB�Ψ췥�I�B�ӳz�F���N��
int main(int argc, char *argv[])
{
	char *delivery = "";
	int thick = 0, count = 0;
	char ch;
	
	while((ch = getopt(argc, argv,"d:t")) != EOF)
	printf("%d\n", argc);
		switch (ch){
			case 'd':
				delivery = optarg; //d: �Ѽ�  optarg�ܼƫ��V�Ӥ޼�' 
				break;
			case 't':
				thick = 1;;
				break;
			default:
				fprintf(stderr, "Unknown option: '%s'\n", optarg);
				return 1;			
		}	
	argc -= optind;  //opting = �R�O�Ӽ� 
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
