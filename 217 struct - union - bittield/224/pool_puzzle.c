#include <stdio.h>
#include "s_struct-1.h"/*
struct fish{
    	const char *name;
		const char *species;
		int teeth;
		int age;
};
*/
void foo(struct fish f) {
 printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age); 
 printf("Snappy likes to eat %s\nSnappy likes to esercise for %f hours\n", f.care.food, f.care.exercise_hours);
}

int main(void) {
	
    struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5} };
    struct fish gnasher = snappy;
    foo(gnasher);
//    printf("ball: %s,\t%.2f\n", ball.color, ball.radius);
    
    return 0;
}


