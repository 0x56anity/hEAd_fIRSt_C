#include <stdio.h>
#include <stdlib.h >
#include <string.h>
int NUM_ADS = 7;
char* ADS[] = {
	"William: SBM GSOH likes sports , TV, dining",
	"Matt: SWM NS likes art, movies, theater",
	"Luis: SLM ND likes books, theater, art",
	"Josh: SJM likes sports, movies and theater",
	"Jed: DBM likes theater, books and dining",
};
void find(int (*match)(char*)){
	int i;
	puts("Search results:");
	puts("-----------------------------------------------");
	
	for (i=0;i<NUM_ADS;i++){
//		if(strstr(ADS[i],"sports")&&!strstr(ADS[i],"bieber")){
		if(match(ADS[i])){
				printf ("%s\n", ADS[i]);
			}
	}
	
	puts("-----------------------------------------------");
}
int go_to_warp_speed(int speed)
{
	
}
char** album_names(char *artist, int year)
{
	
}
int main(void){
	
	int (*warp_fn)(int);
	warp_fn = go_to_warp_speed;
	warp_fn(4);
	
	char** (*names_fn)(char*,int);
	names_fn = album_names;
	char** results = names_fn("Sacha Distel", 1972);
	
	
//	find();
//	free(*ADS)
	return 0;
}
