#include<stdio.h>
#include<stdio.h>

#define SIZE 5
int top = -1;
int stack[SIZE];
void PUSH(int val);
int POP();
void PRINT();
int main(){
	PRINT();
	PUSH(5);
	PUSH(10);
	PUSH(15);
	PUSH(20);
	PUSH(25);
	PUSH(30);
	PUSH(25);
	PRINT();
	POP();
	POP();
	POP();
	PRINT();
	POP();
	POP();
	POP();
	PRINT();
}

void PUSH(int val){
	if(top < SIZE - 1){
		stack[++top] = val;
	}else{
		printf("***STACK OVERFLOW***\n");	
	}
}

int POP(){
	int val;
	if(top > -1){
		val = stack[top--];
	}else{
		printf("***STACK UNDERFLOW***\n");
	}
}


void PRINT(){
	if(top == -1){
		printf("Stack is Empty");
	}else{
		int i;
		for(i = 0; i <= top; i++){
			printf("%d ",stack[i]);
		}
	}
	printf("\n");
}
