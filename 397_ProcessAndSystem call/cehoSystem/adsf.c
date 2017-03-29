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
	char comment[8];
	char cmd[180]="dir";
	
	gets(comment);
//	scanf("%s", &comment);
//	snprintf(cmd, sizeof(cmd), "echo '%s %s'>>reports.log", comment, now());
	sprintf(cmd, "echo %s %s>>kabanarl.txt", comment,now());
	system(cmd);
	return 0;
}
