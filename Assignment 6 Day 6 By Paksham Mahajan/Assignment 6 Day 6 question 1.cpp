/* ASSIGNMENT 6
                QUESTION 1
 PROGRAM/FUNCTION TO FIND THE MAXIMUM ELEMENT IN THE STACK
*/
 
#include<stdio.h>
#include<conio.h>

int stack[30];
int top=-1,size;

void pop();
void push(int x);
void display();
void maxelement_stack();

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
	
	maxelement_stack();
    
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
	 printf("\ndeleted item is %d\n",y); 	
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
 
 void maxelement_stack()
 {
 	if(top==-1)
     {
     	printf("stack is empty\n");
     	printf("underflow condition\n");
     	return ;
	 }
	 
	 int max,i;
	 
	 max=stack[top];
	 
	 for(i=top-1;i>=0;i--)
	 {
	 	if(stack[i]>max)
	 	{
	 		max=stack[i];
		 }
	 }
	 
	 printf("\nMaximum element in stack is %d\n",max);
 	
 }
 
 
         
