#include<stdio.h>

int stack[100];
int top=-1;

//Push operation
void push(int data){
if(top==100){
printf("Stack Overflow\n");
}
else{
stack[++top]=data;
}
}

//Pop Operation
void pop(){
top--;
}

//Top operation
int topStack(){
return stack[top];
}

//Is Empty
int isEmpty(){
return top==-1;
}

//Size
int size(){
return top+1;
}


//Push At Bottom
void pushAtBottom(int t){
//Base case
if(isEmpty()){
push(t);
}
else{
//Otherwise
int t1=topStack();
pop();
pushAtBottom(t);
push(t1);
}
}



//Reverse Stack
void reverse(){
if(isEmpty()){
return;
}

int t=topStack();
pop();
reverse();
pushAtBottom(t);
}


//Driver Code
void main(){

for(int i=1;i<=4;i++){
push(i);
}


reverse();

for(int j=1;j<=4;j++){
printf("%d ",topStack());
pop();
}

printf("\n");

}

