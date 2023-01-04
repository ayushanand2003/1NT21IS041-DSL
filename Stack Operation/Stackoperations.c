#include<stdio.h>   //header file 1
#include<stdlib.h>  //header file 2
#define ss 3
int mstack[3],top=-1;
{
	if(top==ss-1)     //to check wheather there is space left in stack or not
	{
		printf("stack is full\n");
		return ;
	}
	else
	{
		top++;
		mstack[top]=ele;
		printf("elements pushed inside is %d\n",mstack[top]);
	}
	
	
}
int pop()
{
	if(top==-1) //to check wheather element is there in stack or not
	{
		printf("stack is empty\n");
		return -1;
	}
	else
	{
		int ele=mstack[top];
		top--;
		printf("element popped is %d\n",ele);
	}
	
}
void size()   //to check size of elememt
{
	printf("size of the stack is %d\n",top+1);
}
void display() //to display element
{
	int i;
	printf("elements are:");
	for(i=0;i<=top;i++)
	{
	printf("%d ",mstack[i]);
	}
	printf("\n");
}
void main()
{
	int choice,ele;
	printf("1.push\n2.pop\n3.size\n4.display\n5.exit\n"); //Creating menu
	while(1)
	{
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)				
		{
			case 1:	printf("enter the element to push into stack:");
			        scanf("%d",&ele);
			        push(ele);
			        break;

			case 2:	pop();
			        break;

			case 3:	size();
			        break;

			case 4:	display();
			        break;

			case 5:	exit(0);
		
			default:printf("Wrong input");
		}
	}
}



