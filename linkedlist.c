#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;

};
struct node* insert_b(struct node* head,int key)
{
	struct node* temp=NULL;
	temp=(struct node*)malloc(sizeof(struct node)); 
	temp->data=key;
	if(head==NULL)
	{
		temp->next=NULL;
		head=temp;
	}
	else if(head!=NULL)
	{
		temp->next=head;
		head=temp;
	}
	
	return head;
}
struct node* insert_e(struct node* head,int key)
{
	struct node* temp=NULL;
	temp=(struct node*)malloc(sizeof(struct node)); 
	struct node* temp2=head;
	temp->data=key;
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
	}
	temp2->next=temp;
	temp->next=NULL;
	return head;
}
struct node* insertRandom(struct node* head,int key,int pos)
{
	//using 0 based index
	struct node* temp=NULL;
	temp=(struct node*)malloc(sizeof(struct node)); 
	temp->data=key;
	struct node* temp2=head;
	struct node* temp3=NULL;
	int n_position=1;
	while(temp2->next!=NULL && n_position<pos)
	{
		temp2=temp2->next;
		n_position=n_position+1;
	}
	// using temp3 to store the link of the previous node
	temp3=temp2->next;
	//linking the previous node to the newly created node
	temp2->next=temp;
	//linking the new node to the next original node
	temp->next=temp3;
	return head;
}
//don't use this function when starting
void reverse_ll(struct node* head)
{
	int r_count=count(head);
	struct node* temp=head;
	int r_arr[r_count];
	int u=0;
	while(temp!=NULL)
	{
		int temporary=temp->data;
		r_arr[u]=temporary;
		u=u+1;
		temp=temp->next;
	}
	int u_r=r_count-1;
	temp=head;
	while(temp!=NULL && u_r>=0)
	{
		temp->data=r_arr[u_r];
		u_r=u_r-1;
		temp=temp->next;
	}

}
/*
void reverse_crude(struct node* head)
{
	struct node* prev=head;
	struct node* temp=head;
	struct node* curr=head->next;
	prev->next=NULL;
	printf("%p\n",head);
	while(temp!=NULL)
	{
		printf("printing head %p\n",temp);
		temp=temp->next;
		
		
		curr->next=prev;
		printf("printing curr.next%p\n",prev);
		prev=curr;
		printf("printing prev%p\n",prev);
		curr=head;
		printf("printing curr%p\n",curr);
		
	}
	
	head=prev;
	printf("printing head %p\n",head);
	
}
*/
struct node* reverse_ll_new(struct node* head)
{

	struct node *p,*q,*r;
	p=NULL;
	q=head;
	r=q->next;
	while(q!=NULL)
	{
		q->next=p;
		p=q;
		q=r;
		if(r!=NULL)
		{
			r=r->next;
		}
	}
	return p;
}
		
void printi(struct node* head)
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int n_count=0;
int count(struct node* head)
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		n_count=n_count+1;
		temp=temp->next;
	}
	return n_count;

}
int main()
{
	struct node* head=NULL;
	head=insert_b(head,5);
	insert_e(head,7);
	insert_e(head,9);
	insert_e(head,13);
	insert_e(head,44);
	insert_e(head,81);
	insert_e(head,87);
	insert_e(head,91);
	//printi(head);
	head=insert_b(head,123);
	insert_e(head,100);
	insertRandom(head,83,3);
	printi(head);
	//reverse_ll(head);
	//printf("after reversing the linked list\n");
	//reverse_crude(head);
	printf("after reversing\n");
	struct node*rr=reverse_ll_new(head);
	printi(rr);
	
	
	
	// 

}