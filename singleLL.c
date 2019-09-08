
#include"validation.h"
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

typedef struct node snode;

snode *head,*ptr,*first;
struct node *temp;

snode* Create_node(int value)
{

    temp = (snode*)malloc(sizeof(snode*));
     
    if(temp==NULL)
    {
        printf("Invalid memory allocation\n");
        validate(temp);
    }
    
    else
    {
        temp->data = value;
        temp->link = NULL;
        head = temp;
    }
    return head;
  
}

snode* Add_at_End(int value)
{
    temp = (snode*)malloc(sizeof(snode*));
    first = head;
    if(head==NULL)
    {
        head = Create_node(value);  
    }
   
    else 
    {
        while(first->link!=NULL)
        {
            first = first->link;
        }
        temp->data = value;
        first->link = temp;
        temp->link = NULL;
        
    }
    
}

snode* Add_at_Begin(int value)
{
    temp = (snode*)malloc(sizeof(snode*));

    if(head==NULL)
    {
        head = Create_node(value);  
    }
     
    else
    {
        temp->data = value;
        temp->link = head;
        head = temp;
    }
    
}

snode* Insert_at_Pos(int pos,int value)
{
    temp = (snode*)malloc(sizeof(snode*));
    struct node *sptr;
    sptr = head;
    int count = 0;

    if(sptr==NULL)
    {
        head = Create_node(value);  
    }

    else
    {
          
        while(count != pos)
        {
            
            sptr = sptr->link;
            count++;        
            
        }
        temp->link = sptr->link;
        sptr->link = temp;
    }

}

void display()
{
    ptr = (snode*)malloc(sizeof(snode*));
    ptr = head;
    while(ptr->link!=NULL)
    {
        printf("%d---->",ptr->data);
        ptr = ptr->link;
    }
}