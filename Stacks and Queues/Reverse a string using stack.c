#include<stdio.h>
#include<string.h>

#define SIZE 1000

int Stack[SIZE], top = -1;

int isFull()
{
  return top==(SIZE-1);
}

int isEmpty()
{
  return top==-1;
}

// Function to add an item to stack.
int push(int item)
{
  if (isFull())
  {
    return -1;
  }
  Stack[++top] = item;
}

// Function to remove an item from stack.
int pop()
{
  int temp;
  if (isEmpty())
  {
    return -1;
  }
  temp=Stack[top--];
  return temp;
}
char* reverseString(char *s)
{
   int len = strlen(s);  
   int i;  
   for(i=0;i<len;i++)  
        push(s[i]);  
   for(i=0;i<len;i++)  
        s[i]=pop(); 
   return(s);
}
