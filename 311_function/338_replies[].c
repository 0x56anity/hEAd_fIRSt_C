#include <stdio.h>
#include <stdlib.h>
enum response_type {DUMP, SECOND_CHANCE, MARRIAGE, LAW_SUIT};//���x�A�ĤG�����|�A�B��
typedef struct {
	char* name;
	enum response_type type;	
} response;

void law_suit(response r)
{
	printf("Dear %s,\n", r.name);
}

void dump(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Unfortunately your last date has asked us to");//�������O�A���̫�@�ѭn�D�ڭ� 
	puts("say that will not be seeing you again");//���A���|�A����A
};

void second_chance(response r)
{
	printf("Dear %s\n", r.name);
	puts("Good news: your last date has asked us to");//�n�����G�A���̫�����n�D�ڭ�
	puts("arrange another meeting. Please call ASAP.");//�w�ƥt�@���|ĳ�C�ЭP�q�ɧ�
}

void marriage(response r)
{
	printf("Dear %s\n", r.name);
	puts("Congratulations! Your last date has contacted");//���ߡI�A���̫����w�p��
	puts("us with a proposal of marrisge");//
}

void (*replies[])(response)= {dump, second_chance, marriage, law_suit};

int main(void)
{
	response r[] = {
	{"Mike", DUMP}, {"Luis", SECOND_CHANCE}, 
	{"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
	};
	int i;
	
//	(*dump())(r[2]);
//	replies[r[i].type] (r[2]);
	for (i=0;i<4;i++) {
		(*replies[r[i].type])(r[i]);
		}	
	}
		

