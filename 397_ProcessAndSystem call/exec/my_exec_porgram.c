#include<stdio.h> 
#include<stdlib.h>
#include<unistd.h>
int main(){
	char *my_env[] = {"JUICE=peach and apple", NULL};
	execle("diner_info", "diner_info", "4", NULL, my_env);
	puts("Dude - the diner_info code must be busted");//如果execle順利運作，這一行不會被執行 
	return 0;
}
/*execl, execlp,  execle, execv, execvp
l = 引數串列(LIST), E = 環境(enviroment), P = 根據路徑(Path), V = 向量(Vector) */
