#include<stdio.h> 
#include<stdlib.h>
#include<unistd.h>
int main(){
	char *my_env[] = {"JUICE=peach and apple", NULL};
	execle("diner_info", "diner_info", "4", NULL, my_env);
	puts("Dude - the diner_info code must be busted");//�p�Gexecle���Q�B�@�A�o�@�椣�|�Q���� 
	return 0;
}
/*execl, execlp,  execle, execv, execvp
l = �޼Ʀ�C(LIST), E = ����(enviroment), P = �ھڸ��|(Path), V = �V�q(Vector) */
