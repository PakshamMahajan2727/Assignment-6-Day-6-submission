/* ASSIGNMENT 6
                QUESTION 2
 PROGRAM/FUNCTION TO FIND THE MINIMUM ELEMENT IN THE STACK
*/
 
#include<stdio.h>
#include<conio.h>

int stack[30];
int top=-1,size;

void pop();
void push(int x);
void display();
void minelement_stack();
int main()
 { 
     int times,i,j,val,time;
    printf("Enter how many values you want to enter into stack\n");
    printf("OR Enter the size of stack <= %d\n",30);
    scanf("%d",&size);
    
    printf("enter how many times you want to push into stack\n");
    printf("you can push %d times maximum only\n",size);
	scanf("%d",&times);
	for(i=0;i<times;i++)
	{
		printf("\nenter value you want to push\n");
		scanf("%d",&val);
		push(val);
		printf("\nstack at this moment is\n");
		display();  	
	} 
	
	printf("\nenter how many times you want to pop from stack\n"); 
	scanf("%d",&time);
	for(j=0;j<time;j++)
	{
		pop(); 
		printf("\nstack at this moment is\n");
		display();  	
	} 
	
      minelement_stack();
    getch();
    return 0;
 }
 
 void push(int x)
 {
       
	   if(top==size-1)
	   {
	   	  printf("overflow condition\n");
	   	  printf("stack is full,push cannot be done\n");
	   	  return;
	   }
	   else if(top==-1)
	   {
	   	  top=0;
	   	  stack[top]=x;
	   }
	   else
	   {
	   	  top=top+1;
	   	  stack[top]=x;
	   }  	
 }    
 
 
 void pop()
 {
     int y;
     
     if(top==-1)
     {
     	printf("stack is empty,pop cannot be done\n");
     	printf("underflow condition\n");
     	return ;
	 }
	 
	 y=stack[top];
	 top=top-1;
	 printf("\ndeleted item is %d",y); 	
 }   
 
 void display()
 {
 	if(top==-1)
     {
     	printf("stack is empty,display cannot be done\n");
     	printf("underflow condition\n");
     	return ;
	 }
	 
	 int i;
	 
	 for(i=0;i<=top;i++)
	 {
	 	printf("%d ",stack[i]);
	 }
	 
 }
 
 void minelement_stack()
 {
 	if(top==-1)
     {
     	printf("stack is empty\n");
     	printf("underflow condition\n");
     	return ;
	 }
	 
	 int min,i;
	 
	 min=stack[top];
	 
	 for(i=top-1;i>=0;i--)
	 {
	 	if(stack[i]<min)
	 	{
	 		min=stack[i];
		 }
	 }
	 
	 printf("\nMinimum element in stack is %d\n",min);
 	
 }
 
 
         
         
