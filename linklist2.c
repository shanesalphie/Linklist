/*Doubly linked list*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    int x;
    struct node
    {
        struct node *prev;
        int data;
        struct node *next;
    };
    int ch,entry;
    struct node *head=NULL,*pos=NULL,*tail=NULL,*del=NULL,*temp=NULL,*ptr=NULL;
    struct node *new;
   
    int z;
    printf("\n \t\t MENU \n1.APPEND \n2.Forward Display  \n3.BACKWARD DISPLAY  \n4.DELETION HEAD \n5.DELETE TAIL \n6.INSERTION AT FRONT  \n7.EXIT \n");
    while(1)
    {
        printf("\nEnter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("\nEnter Data:\n");
                scanf("%d",&entry);
                if (head==NULL)
                {
                    head=(struct node *)malloc(sizeof(struct node));
                    head->prev=NULL;
                    head->data=entry;
                    head->next=NULL;
                    pos=head;
                    tail=head;
                }
                else
                {
                    tail->next=(struct node *)malloc(sizeof(struct node));
                    tail->next->prev=tail;
                    tail->next->data=entry;
                    tail->next->next=NULL;
                    tail=tail->next;
                }
                break;
            }
            case 2:
                {
                    pos=head;
                    printf("\nElements are:");
                    while(pos !=NULL)
                    {
                        printf("\t%d",pos->data);
                        pos=pos->next;
                    }
                    printf("\n");
                    break;
                }
            case 3:
                {
                    pos=tail;
                    printf("\nElements are:");
                    while(pos !=NULL)
                    {
                        printf("\t%d",pos->data);
                        pos=pos->prev;
                    }
                    printf("\n");
                    break;
                }
               
            case 4:
                {
                    del=head;
                    head=head->next;
                    head->prev=NULL;
                    free(del);
                    pos=head;
                    printf("\nThe elements after deletion are:\n");
                    while(pos !=NULL)
                    {
                        printf("\t%d",pos->data);
                        pos=pos->next;
                    }
                    printf("\n");
                    break;
                   
                }
            case 5:
                {
                    del=tail;
                    tail=tail->prev;
                    tail->next=NULL;
                    free(del);
                    pos=head;
                    printf("\nThe elements after deletion are:\n");
                    while(pos !=NULL)
                    {
                        printf("\t%d",pos->data);
                        pos=pos->next;
                    }
                    printf("\n");
                    break;   
                           
                }
            case 6:
                {
                    printf("\nEnter the data :\n");
                    scanf("%d",&x);
                    new->prev=NULL;
                    new->data=x;
                    new->next=head;
                    head->prev=new;
                    head=new;
                }
                printf("\n");
                break;
               
            case 7:
                {
               
                    printf("\nEXITING...\n");
                    exit(0);
                }
            printf("\n");
     }
  }           
}     
