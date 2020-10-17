#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

void create();
void display();
void insertatbe();
void insertatend();
void insertatpos();

int main()
{
    int c;
    while(1)
    {
        printf(".......MENU.......\n");
      printf("1.create\n");
      printf("2.display\n");
      printf("3.insert at beginning\n");
      printf("4.insert at end\n");
      printf("5.insert at given position\n");
      printf("6.exit\n");
      printf("enter your choice ");
      scanf("%d",&c);
      switch(c)
      {
      case 1:
        create();
        break ;
      case 2:
        display();
        break ;
      case 3:
        insertatbe();
        break;
      case 4:
        insertatend();
        break;
      case 5:
        insertatpos();
        break;
      case 6:
        exit(0);
        break;
      default:
        printf("wrong choice\n");
        break;

      }

    }
    return 0;
}

void create()
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data value for new node\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
        head=newnode;
    else
    {
      temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    }

}
void display()
{
    struct node *temp;
    if(head==NULL)
        printf("list is empty\n");
    else
    {
        temp=head;
        printf(" list elements are\n");
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }

}
void insertatbe()
{
  struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data value for new node\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
      if(head==NULL)
        head=newnode;
      else{
        newnode->next=head;
        head=newnode;
      }

}
void insertatend()
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
       head=newnode;
       else
       {
          temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=newnode;

       }
}
void insertatpos()
{
    struct node *newnode,*preptr,*ptr;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
       head=newnode;
    else
       {
           preptr,ptr=head;



       }


}
