#include<stdio.h>
#include<stdlib.h>		//used to call malloc function
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head=NULL;
	head=(struct node *)malloc(sizeof(struct node));		//mem allocated for new node
	head->data=100;
	head->next= NULL;
	
	struct node *current=(struct node *)malloc(sizeof(struct node));
	current->data=200;
	current->next= NULL;
	head->next=current;
	
	printf("%d  %d %d  %d",head->data, head->next, current->data, current->next);
}
