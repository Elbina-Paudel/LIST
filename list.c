#include<stdio.h>
#include<stdlib.h>
#define NUMNODE 50
int avail=0;
struct nodetype
{
 int info,next;
};
struct nodetype node[NUMNODE];
void initlist()
{
 int a;
 for(a=0; a<NUMNODE; a++)
 {
 node[a].next=a+1;
 }
 node[NUMNODE-1].next=-1;
}
int getnode()
{
 int p;
 if(avail==-1)
 {
 printf("Data can't be added");
 exit(1);
 }
 p=avail;
 avail=node[avail].next;
 return(p);
}
void freenode(int p)
{
 node[p].next=avail;
 avail=p;
}
void inserter(int p, int x)
{
 int q;
 if(p==-1)
 {
 printf("Invalid operation");
 exit(0);
 }

 q=getnode();

 node[q].info=x;
 node[q].next=node[p].next;
 node[p].next=q;
 printf("\nInserted item= %d", x);
}
void delafter(int p)
{
 int q, x;
 if((p==-1)||node[p].next==-1)
 {
 printf("Invalid deletion");
 exit(1);
 }

 q=node[p].next;
 x=node[q].info;
 node[p].next=node[q].next;
 freenode(q);
 printf("\nDeleted node= %d", p);

}
int main()
{
 int op, pt, im;
 printf("1.Enter to Insert an item.");
 printf("\n2.Delete an item.");
 printf("\n3.Exit.");
 do{
 printf("\nEnter an option: ");
 scanf("%d", &op);
 switch (op)
 {
 case 1:
 printf("Enter the position: ");
 scanf("%d", &pt);
 printf("Enter the item: ");
 scanf("%d", &im);
 inserter(pt, im);
 break;

 case 2:
 printf("Enter the position :");
 scanf("%d", &pt);
 delafter(pt);
 break;
 }
 }while(op !=3);

 return(0);
}
