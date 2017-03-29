#include <stdio.h>//pairs values
#include <stdlib.h> 
#include <string.h>
//qsort(void *array, size_t length, size_t item_size, int (*compar)(const void *, const void *))

int  bmw(int *s, int* f)
{
	printf("%d   %d--",*s ,*f);
	return s - f;
}

int compare_scores(const void* score_a, const void* score_b)
{
	int a = *(int*)score_a;
	int b = *(int*)score_b;
//	printf("%d\n",(a-b));
	return a - b;
}

int compare_scores_desc(const void* score_a, const void* score_b)
{
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return b - a;
}
typedef struct{
	int width;
	int height;
} rectangle;

int compare_ateas(const void* a, const void* b)
{
	rectangle* ra = (rectangle*)a;
	rectangle* rb = (rectangle*)b;
	int area_a = (ra->width * ra->height);
	int area_b = (rb->width * rb->height);
//	printf("A = %7dB = %7d\n", area_a, area_b);
//	printf("A = %7d;B = %7d\n", area_a/ra->width, area_a/ra->height);
	return area_a - area_b;
}

int compare_names(const void* a, const void* b)
{
	char** sa = (char**)a;
	char** sb = (char**)b;
	printf("%s %s;",*sa, *sb);
	return strcmp(*sa, *sb);
}


int main(void){
	int i, scres[] = {543,323,32,554,11,3,112};
//	qsort(scres, 7, sizeof(int), bmw);
//	qsort()
	char *s = "df";

	
	puts("These are the scores in order:");
	for(i=0;i<7;i++)
		printf("%d\n", scres[i]);
	puts("These are the names in order:");
	char *names[]={"Karen", "Mark", "Brett", "Molly"};
	qsort(names, 4, sizeof(char*), compare_names);
	for(i=0;i<4;i++)
		printf("%s\n", names[i]);
	
	}
	
	
	
	
	
	
	
