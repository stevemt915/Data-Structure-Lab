#include<stdio.h>
int a[5],max_size,front=-1,rear=-1,item;
void enqueue();
void dequeue();
void display();
void peek();
void main()
{
int choice;
printf("enter the maximum size of the queue: \n");
scanf("%d",&max_size);
while(choice!=5)
{
printf("enter the choice:\n 1.enqueue 2.dequeue 3.display 4.peek 5.exit\n");
scanf("%d",&choice);
if(choice==1)
{
enqueue();
}
else if(choice==2)
{
dequeue();
}
else if(choice==3)
{
display();
}
else if(choice==4)
{
peek();
}
}
}
void enqueue()
{
int item;
if(front==-1&&rear==-1)
{
front=0;
rear=0;
printf("enter the elements of to enqueue: \n");
scanf("%d",&item);
a[rear]=item;
}
else if(front==(rear+1)%max_size)
{
printf("overflow\n");
}
else
{
rear=(rear+1)%max_size;
printf("enter the elements to enqueue:\n");
scanf("%d",&item);
a[rear]=item;
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("underflow\n");
}
else if(front==rear)
{
printf("removed element is: %d\n",a[front]);
front=-1;
rear=-1;
}
else
{
item=a[front];
printf("removed element: %d\n",item);
front=(front+1)%max_size;
}
}
void display()
{
int i;
if(front==-1&&rear==-1)
{
printf("queue is empty\n");
}
else
{
for(i=front;i!=rear;i=((i+1)%max_size))
{
printf("%d\n",a[i]);
}
printf("%d\n",a[i]);
}
}
void peek()
{
if(front==-1&&rear==-1)
{
printf("queue is empty\n");
}
else
{
printf("top element is: %d\n",a[front]);
}
}

