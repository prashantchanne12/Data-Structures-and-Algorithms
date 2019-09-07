// Circular Queue

#include<stdio.h>
#include<conio.h>
#define MAX 5

struct queue{
	int front,rear;
	int a[MAX];	
}q;

void enqueue(int x){
	
	if(q.rear == q.front){
		printf("Queue Overflow!!");
	}else{
		
		if(q.front == -1){
			q.front = 0;
		}

		q.rear = (q.rear+1) % MAX;
		q.a[q.rear] = x;
	
			 
	}
}

void dequeue(){
	if(q.front == -1){
		printf("Queue Underflow");
	}else{
		q.front = (q.front+1) % MAX;
	}
}

void display(){
	if(q.front == -1){
		printf("Queue Underflow!!");
	}else{
		int i = q.front;
		
		while(i != q.rear){
			printf("%d ",q.a[i]);
			i = (i+1) % MAX;
		}
		
		printf("%d",q.a[i]);
	}
}

void destroy(){
	q.front = q.rear = -1;
}

int main(){
	
	int c,x,t=0;
	q.front = -1;
	q.rear = -1;
	
	do{
		printf("\n-----------------\n");
		printf("1) Enqueue\n");
		printf("2) Dequeue\n");
		printf("3) Display\n");
		printf("4) Destroy\n");
		printf("5) Exit\n");
		printf("-----------------\n");
		printf("Enter your choice: ");
		scanf("%d",&c);
		
		switch(c){
			case 1: printf("Enter the Element: ");
					scanf("%d",&x);
					enqueue(x);
					break;
					
			case 2: dequeue();
					break;
					
			case 3: display();
					break;
					
			case 4: destroy();
					break;
				
			case 5: t=1;
					break;
					
			default: printf("Enter correct option!!");
					 break;
		}
	
	}while(t!=1);
	
	return 0;
}
