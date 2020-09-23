#include<stdio.h>
#include<process.h>

#define stack_size 3
int item,s[3],top=-1;
int item_deleted,choice,ch=1;
void push()
{
  if(top==stack_size-1)
  {
    printf("Stack Overflow\n");
    return 0;
  }
  printf("Enter item to be inserted:\n");
  scanf("%d",&item);
  top=top+1;
  s[top]=item;
  }
  int pop()
  {
    if(top==-1)
    {
      printf("Cannot delete item due to Stack Underflow\n");
      return 0;
    }
    item_deleted=s[top];
    top=top-1;
    return item_deleted;
  }
  void display()
  {
    int i;
    if(top==-1)
    {
      printf("Stack is Empty(Underflow condition)\n");
      return 0;
    }
    printf("Contents of the Stack are:\n");
    for(i=0;i<=top;i++)
    printf("%d\n",s[i]);
  }
  int main()
  {
    while(ch==1)
    {
      printf("Enter your choice:\n1.Push\n2.pop\n3.Display\n4.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1: push();
                break;
        case 2: item_deleted=pop();
                if(item_deleted!=0)
                printf("Item deleted is:%d\n",item_deleted);
                break;
        case 3: display();
                break;
        case 4: exit(0);
      }
      printf("If you want to continue,press 1,else press 0\n");
      scanf("%d",&ch);
    }
  }
