#include<stdio.h> 
int main(){
	char food[99]={54a65f4a65f46a5d4f6d};/*
	printf("enter Favorite food:");
	fgets(food, sizeof(food), stdin);
	puts(food);*/
	fputs(food, sizeof(food), stdout);
	
return 0;
}
