#include <stdio.h>
	typedef struct island{
		char *name;
		char *opens;
		char *closes;
		struct island *next;
	}island;
	
void desplay(island *start){
	island *i = start;
	for (; i != NULL ; i = i->next)
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
}
int main(void){

	
	island amity = {"Amity", "09:00", "17:00", NULL};
	island craggy = {"Craggy", "09:00", "17:00", NULL};
	island island_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
	island shutter = {"Shutter", "09:00", "17:00", NULL};
	
	amity.next = &craggy;
	
	craggy.next = &island_nublar;
	island_nublar.next = &shutter;
	
	island skull = {"Skull", "09:00", "17:00", NULL};
	island_nublar.next = &skull;
	skull.next = &shutter;
	
	desplay(&amity);
}
