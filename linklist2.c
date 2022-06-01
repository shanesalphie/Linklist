/*Doubly linked list*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i;
	struct node
	{
		struct node *prev;
		int data;
		struct node *next;
	};
	int ch,entry;
	struct node *head=NULL,*pos=NULL,*tail=NULL,*del=NULL,*temp=NULL,*ptr=NULL;
	
	int z;
	printf("\n \t\t MENU \n 1.APPEND \n2.Forward Display  \n3.BACKWARD DISPLAY  \n4.DELETION HEAD 			\n5.DELETE TAIL \n6.DELETE ELEMENT IN BETWEEN \n7.EXIT\n");
	while(1)
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter Data:");
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
					printf("The elements after deletion are:\n");
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
					pos=tail;
					printf("The elements after deletion are:\n");
					while(pos !=NULL)
					{
						printf("\t%d",pos->data);
						pos=pos->prev;
					}
					printf("\n");
					break;	
							
				}
			case 6:
				{
					temp=head;
					printf("Enter the position you have to delete the element:");
					scanf("%d",&z);
					while(temp -> data != z) 
					{ 
        					temp = temp -> next;  
        				}
        				if(temp -> next == NULL)  
					{  
					    printf("\nCan't delete\n");  
					}  
					else if(temp -> next -> next == NULL)  
					{  
					    temp ->next = NULL;  
					    printf("\nNode Deleted\n");  
					}  
        				else  
        				{   
					    ptr = temp -> next;  
					    temp -> next = ptr -> next;  
					    ptr -> next -> prev = temp;  
					    free(ptr);  
					    printf("\nNode Deleted\n");  
					}     
    					printf("\n");
					break;	
				}
			case 7:
				{
				
					printf("BYE");
					exit(0);
				}
		}
	}
}			
