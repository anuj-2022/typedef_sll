#include <stdio.h>
#include<stdlib.h>

void create();
void display();
struct node
{
    char data;
    struct node *link;
};
struct node *head=NULL;

int main()
{
    char arr[5]={'a','e','i','o','u'};
    create(arr);
    display();
    return 0;
}

void create(char b[])
{
    struct node *curr,*prev;
    int i=0,n;
   
    for(i=0;i<5;i++)
    {
        curr=(struct node*)malloc(sizeof(struct node));
        if(curr==NULL)
        {
            printf("memory is not allocated\n");
            exit(0);
        }
 
        curr->data=b[i];
        curr->link=NULL;
        if(head==NULL)
        head=prev=curr;
        else
        {
            prev->link=curr;
            prev=prev->link;
        }
    }
    prev->link=head;//to make the list  circular
}
void display()
{
  struct node *t;
  t=head;

  while(t!=NULL)
        {
            printf("%c ",t->data);
            if(t->link==head)
            {
                printf("\nlist is circular\n");
                exit(0);
            }
            
            t=t->link;
        }
        printf("\nlist is not circular\n");
}
