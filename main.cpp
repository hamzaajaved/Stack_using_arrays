#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 10

int arr[MAX];
int top = -1;

void insert(int x);
void pop();
void print();
int main(int argc, char const *argv[])
{
  insert(5);
  insert(6);
  insert(7);
  insert(8);
  print();
  pop();
  pop();
  pop();
  pop();
  pop();
  system("pause");
  return 0;
}

void insert(int x){
  if(top == MAX - 1){
    cout << "Error! Stack Overflow" << endl;
  }
  // top++;
  arr[++top] = x; // First Incremented than assign
  cout << x << " pushed in Stack" << endl;
}

void pop(){
  if(top == -1){
    cout << "Stack is Empty!!" << endl;
  }
  else{
    int x = arr[top--]; // First Assign than Decrement
    cout << x << " popped from Stack" << endl;
  }
 
}

void print(){
  cout << "STACK" << endl;
  for(int i = 0; i <= top; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}


