#include<stdio.h>

int stack[100],val,i;
int choice=0,n,top=-1;
void push();
void pop();
void traverse();
void main()
{
printf("enter the no.of elements in stack");
scanf("%d",&n);
while(choice!=3)
{
printf("choose one option");
printf("1.push\n2.pop\n3.exit");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
exit(0);
break;
default:
printf("invalid option");
break;
}
}
}
void push()
{
int val;
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&stack[top]);
}
if(top==n)
{
printf("overflow");
}
else
{
top=top+1;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
printf("underflow");
}
else
{
val=stack[top];
top=top-1;
 printf("elements is removed");
 }
 }