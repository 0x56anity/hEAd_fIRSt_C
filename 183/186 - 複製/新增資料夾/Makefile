thruster.o: thruster.h thruster.c
	gcc -c thruster.c
	
launch.o: launch.c launch.h thruster.h
	gcc -c launch.c

launch: launch.o thruster.o
	gcc launch.o thruster.o -o launch