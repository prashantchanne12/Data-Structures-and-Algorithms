// Reverse a String using Stack

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 65

struct stack{
	int top;
	char a[MAX];
}s;

void push(char x){
	if(s.top == MAX-1){
		printf("Stack Overflow!");
	}else{
		s.top++;
		s.a[s.top] = x;
	}
}

char pop(){
	if(s.top == -1){
		printf("Stack Underflow!");
	}else{
		 char c = s.a[s.top];
		 s.top--;
		 return c;
	}
}

void display(){
	int i;
	
	if(s.top==-1){
		printf("Stack is Underflow!!");
	}else{
	for(i=0;i<=s.top;i++){
		printf("%c ",s.a[i]);
		}
	}
}

int main(){
	char str[MAX];
	int i=0;
	s.top = -1;
	
	
	printf("Enter a String you want to reverse:  ");
	scanf("%s",str);
	
	for(i=0;i<strlen(str);i++){
		push(str[i]);
	}
	
	
	for(i=0;i<strlen(str);i++){
		str[i] = pop();
	}
	
	printf("%s",str);

	
	return 0;
}
