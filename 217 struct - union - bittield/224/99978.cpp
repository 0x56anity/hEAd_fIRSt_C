#include <stdio.h>

struct Ball{
    const char *name;
	const char *species;
	int teeth;
	int age;
};

void foo(Ball ball) { // ball 成員值被複製過來 
 printf("%s is a %s with %i teeth. He is %i\n", ball.name, ball.species, ball.teeth, ball.age);
//     ball.age = 100.0;    
}
int main(void) {
	
    Ball ball = {"Snappy", "Piranha", 69, 4};
    foo(ball);
//    printf("ball: %s,\t%.2f\n", ball.color, ball.radius);
    
    return 0;
}


