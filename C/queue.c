#include<stdio.h>
#define size 20

int que_arr[size],front=-1,rear=-1;

int enque(int data)
{
  if((rear+1)==size)
  {
   printf("overflow\n");
  }
  else if(rear==-1 && front==-1)
  {
    rear=0;front=0;
    que_arr[front]=data;
  }
  else
  {
    rear++;
    que_arr[rear]=data;
  }
}

int deque()
{
  if(front==-1 && rear==-1)
  {
     printf("underflow\n"); 
  }
 
  else
  {
     printf("%d is deleted",que_arr[front]);
     front++;
  }
}

int traverse()
{
  for(int i=front;i<=rear;i++)
  {
      printf("\n%d",que_arr[i]);
  }
  return 1;
}

int main()
{
  deque();
  enque(11);
  enque(22);
  enque(99);
  enque(999);
  deque();
  traverse();
}
