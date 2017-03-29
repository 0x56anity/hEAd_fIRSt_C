#include <stdio.h>
#include <stdlib.h>
enum response_type {DUMP, SECOND_CHANCE, MARRIAGE, LAW_SUIT};//轉儲，第二次機會，婚姻
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
	puts("Unfortunately your last date has asked us to");//不幸的是你的最後一天要求我們 
	puts("say that will not be seeing you again");//說，不會再見到你
};

void second_chance(response r)
{
	printf("Dear %s\n", r.name);
	puts("Good news: your last date has asked us to");//好消息：你的最後期限要求我們
	puts("arrange another meeting. Please call ASAP.");//安排另一次會議。請致電盡快
}

void marriage(response r)
{
	printf("Dear %s\n", r.name);
	puts("Congratulations! Your last date has contacted");//恭喜！你的最後日期已聯絡
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
		

