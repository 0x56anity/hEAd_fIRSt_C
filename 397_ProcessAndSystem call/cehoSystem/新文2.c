#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char* now()
{
	time_t t;
	time (&t);
	return asctime(localtime (&t));
}
/*Master Control Program utility
  Records guard patrol check-ins. */
int main()
{
	char comment[80];
	char cmd[180];
	/*
	time_t t1 = time(NULL);
    struct tm *nPtr = localtime(&t1);
    char *now = asctime(nPtr);
	*/
	fgets(comment,80,stdin);
	snprintf(cmd, sizeof(cmd), "echo '%s %s' > reports.log", comment, now());
//	puts(cmd);
	system(cmd);
	return 0;
}
