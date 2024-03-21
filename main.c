//program to perform push and pop operation.

#include <stdio.h>
#define SIZE 5
#include <stdlib.h>

int stack[SIZE];
int TOP =-1;

void display(){
  printf("The Stack is now:");
  for(int i=0;i<=TOP;i++){
    printf("%d\t",stack[i]);
  }
}

void push(int value){
  if(TOP == SIZE-1){
    printf("Stack overflow\n");
  }
  else {
    TOP = TOP + 1;
    stack[TOP] = value;
    printf("Pushed value: %d\n", value); 
  }
}

int pop(){
  if(TOP == -1)
  {
    printf("Stack Underflow\n");
    return -1;
  }
  else{
    int poppedValue = stack[TOP];
    TOP = TOP - 1;
    return poppedValue;
  }
}



int main() {
  int choice ,value;
  
  do
  {
    printf("\n1.PUSH  2.POP 3.EXIT");
    printf("Enter Your choice :");
    scanf("%d",&choice);
  
    switch(choice){
      case 1 :printf("Entre the elemets to push on stack");
            scanf("%d",&value);
            push(value);
            display();
            break;

     case 2 :value =pop();
          if (value != -1){
            printf("The poped values is %d \n",value);
          }
          display();
          break;

     case 3:exit(0);

     default :
      printf("Invalid choice !!!!");
    }
    
  }while(choice !=3);

  printf("YOU ARE OUT OF PROGRAM!!!!!");
  
  return 0;
}

