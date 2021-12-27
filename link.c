#include<stdio.h>
#include<stdlib.h>
 struct node{
   int data;
   struct node * next;
}node;
 struct node * createlist(int n);
 int main(){
       int n=0;
       struct node * HEAD=NULL;
       printf("\n How many nodes:");
       scanf("%d",&n);
       HEAD=createlist(n);
       displayList(HEAD);
       
       
       return 0;
}

 struct node * createlist(int n)

{
    int i=0;
    struct node *head=NULL;
    struct node *temp=NULL;
    struct node *p=NULL;
    for(i=1;i<=n;i++)
    {
      temp=(struct node *)malloc(sizeof(node));
      printf("\n Enter the data for %d node number:",i);
      scanf("%d",&(temp->data));
      temp->next=NULL;
      if(head == NULL)
      {
         head=temp;
      }
      else
      {
          p=head;
          while(p->next!=NULL)
             p=p->next;
          p->next= temp;
      
      }
    }
    return head;
    
}

void displayList(struct node * head)
{
   struct node * p = head;
   while(p !=NULL)
   {
      printf("\t%d",p->data);
      p=p->next;
   
   }
}
       
       
