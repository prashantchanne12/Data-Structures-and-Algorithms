// Stack Implmentation Using Array

#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10

struct stack{
	int top;
	int a[MAXSIZE];
}s;

void push(int x){
	if(s.top == MAXSIZE-1){
		printf("Stack Overflow!");
	}else{
		s.top++;
		s.a[s.top] = x;
	}
}

void pop(){
	if(s.top == -1){
		printf("Stack Underflow!");
	}else{
		printf("%d is Popped!",s.a[s.top]);
		s.top--;
	}
}

void display(){
	int i;
	
	if(s.top==-1){
		printf("Stack is Underflow!!");
	}else{
	for(i=0;i<=s.top;i++){
		printf("%d ",s.a[i]);
		}
	}
}

void destroy(){
	s.top=-1;
	printf("Stack is destroyed!!");
}


int main(){
	s.top = -1;
	int c,x,t;
	do{
	
		printf("\n----------------");
		printf("\n1) PUSH\n");
		printf("2) POP\n");
		printf("3) DISPLAY\n");
		printf("4) DISTROY\n");
		printf("5) EXIT\n");
		printf("----------------\n");
		printf("Enter Your Choice: ");
		scanf("%d",&c);
		printf("\n");
		
		switch(c){
			case 1: printf("Enter an Element to PUSH: ");
					scanf("%d",&x);
					push(x);
					break;
					
			case 2: pop();
					break;
					
			case 3: printf("Elements in STACK: ");
					display();
					break;
					
			case 4: destroy();
					break;
					
			case 5: t=1;
					break;
					
			default: printf("Enter Correct Option!!");
					 break; 
					}
			
	}while(t!=1);
	
	
	return 0;
}





















