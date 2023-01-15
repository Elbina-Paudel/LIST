#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int info;
struct node *next_d; 
};
//nodetype variable
struct node *newnode;
struct node *head;
struct node *ptr=NULL;
struct node *temp=NULL;
//Function Declaration
void insert_1st();
void insert_end();
void insert_speci();
void delete_1st();
void delete_end();
void delete_speci();
void display();
//main function
int main()
{
int n;
while(1)
{
printf("\n0.Exit\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Delete at beginning\n5.Delete at end\n6.Delele at specified position\n7.Display all elements in the list\n");
printf("Enter your choice :");
scanf("%d",&n);
switch(n)
{
case 0:
exit(0);
return 0;
break;
case 1:
insert_1st();
break;
case 2:
insert_end();
break;
case 3:

insert_speci();
break;
case 4:
delete_1st();
break;
case 5:
delete_end();
break;
case 6:
delete_speci();
break;
case 7:
display();
break;
default:
break;
}
}
return 0;
}
void insert_1st()
{
int d;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter your data :");
scanf("%d",&d);
newnode->info=d;
newnode->next_d=head;
head=newnode;
return;
}
void insert_end()
{
int data;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter your data :");
scanf("%d",&data);
newnode->info=data;
newnode->next_d=NULL;
if(head==NULL)
{
head=newnode;
}
else

{
ptr=head;
while(ptr->next_d!=NULL)
{
ptr=ptr->next_d;
}
ptr->next_d=newnode;
}
return;
}
void insert_speci()
{
int data,i,pos;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter your data :");
scanf("%d",&data);
newnode->info=data;
printf("\nEnter the position in which in you want to insert :");
scanf("%d",&pos);
ptr=head;
for(i=0;i<pos-1;i++)
{
ptr=ptr->next_d;
if(ptr==NULL)
{
printf("\nPosition not found");
return;
}
}
newnode->next_d=ptr->next_d;
ptr->next_d=newnode;
return;
}
void delete_1st()
{
if(head==NULL)
{
printf("List is empty!!");
}
else
{
ptr=head;
head=head->next_d;
printf("The deleted data is %d",ptr->info);
free(ptr);

}
return;
}
void delete_end()
{
if(head==NULL)
{
printf("\nlist is empty!!");
}
else if(head->next_d==NULL)
{
ptr=head;
head=NULL;
printf("Deleted element is %d",ptr->info);
free(ptr);
}
else
{
ptr=head;
while(ptr->next_d!=NULL)
{
temp=ptr;
ptr=ptr->next_d;
}
temp->next_d=NULL;
printf("The deleted element is %d",ptr->info);
free(ptr);
}
return;
}
void delete_speci()
{
int i;
int pos;
printf("\nEnter the position you want to delete :");
scanf("%d",&pos);
if(head==NULL)
{
printf("\nThe list is empty!!");
} 
else if(pos==0)
{
ptr=head;
head=head->next_d;
printf("\nThe deleted element is :",ptr->info);

free(ptr);
}
else
{
ptr=head;
for(i=0;i<pos;i++)
{
temp=ptr;
ptr=ptr->next_d;
if(ptr==NULL)
{
printf("\nposition not found");
return;
}
}
temp->next_d=ptr->next_d;
printf("The deleted element is %d",temp->info);
free(ptr);
}
return;
}
void display()
{
ptr=head;
if(ptr==NULL)
{
printf("\nThe list is empty!!");
}
else
{
ptr=head;
printf("The elements in list is:");
while(ptr!=NULL)
{
printf("\n%d",ptr->info);
ptr=ptr->next_d;
}
}
return;
}
