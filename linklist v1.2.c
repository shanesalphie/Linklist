#include<stdio.h>
#include<stdlib.h>
void main()
{
        struct node
        {
                int data;
                struct node *next;
        };
        struct node *head=NULL, *pos=NULL, *tail=NULL;
        int ch,entry, count=0;
        while(1)
        {
                printf("\n1: Insert \n2: Display \n3: COUNT \n4: SEARCH \n5: Exit");
                printf("\n Enter your choice:");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                        {       
                                printf("\n Enter Data");
                                scanf("%d",& entry);
                                if(head==NULL)
                                {
                                        head=(struct node*)malloc(sizeof(struct node));
                                        head-> data=entry;
                                        pos=head;
                                        tail=head;
                                }
                                else
                                {
                                        tail-> next=(struct node*)malloc(sizeof(struct node));
                                        tail=tail->next;
                                        tail->data=entry;
                                }
                                break;
                        }
                        case 2:
                        {
                                pos=head;
                                printf("\n Elements are");
                                while(pos!=NULL)
                                {
                                        printf("\t %d", pos->data);
                                        pos=pos->next;
                                }
                                break;
                        }
                        case 3:
                        {
                                pos=head;
                                while(pos!=NULL)
                                {
                                        count++;
                                        pos=pos->next;
                                }
                                printf("%d",count);
                                break;
                        }
                        case 4:
                        {
                                int s;
                                printf("Enter element to be searched:");
                                scanf("%d",&s);
                                pos=head;
                                while(pos!=NULL)
                                {
                                        if(pos->data==s)
                                        {
                                                printf("elements present\n");
                                                printf("%d",pos->data);
                                        }
                                        pos=pos->next;
                                        break;
                                }                                                       
                        }
                        case 5:
                        {
                                printf("Good Bye\n");
                                exit(0);
                        }
                }
        }
}
