#include<malloc.h>
#include<stdio.h>
typedef struct
{
	int info;
	struct node *next;
}node;

void print_a_node(node *n)
{
	printf("\nat %p\nnode->info: %d \nnode->next=%p\n",n,n->info,n->next);
}
void create_a_node(node *n,char *name,int info)
{
n->info=info;
n->next=NULL;
printf("\nNode created\n%s->info:%d\t%s->next=%p\n",name,n->info,name,n->next);
}

void add_a_node_end(node *head,int info)
{
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	node *new;
	new=(node *)malloc(sizeof(node));
	temp->next=new;
	new->info=info;
	new->next=NULL;
}

void list_all_nodes(node *head)
{
	print_a_node(head);
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		print_a_node(temp);
	}
}

int main()
{
node *head, *last;
head=(node *)malloc(sizeof(node));
head->info=000;
head->next=NULL;
print_a_node(head);
char name[20], choice;
int ch,inf;
while(1)
{
	printf("\n1-insert at end, 2-list all nodes, 3-delete last node, 4-exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:	printf("\n enter the info you want in the node:\t");
		scanf("%d",&inf);
		printf("\n-----Adding a node with info=%d at end-----\n",inf);
		add_a_node_end(head,inf);
		break;	
	
	case 2:	printf("\n-----listing all nodes-----\n");
		list_all_nodes(head);
		break;
	
	case 3:	printf("\n PURNENDU SIR WILL NOT DO EVERYTHING !!!\n");break;
	
	case 4:	exit(1);
	}
}
return 1;
}

