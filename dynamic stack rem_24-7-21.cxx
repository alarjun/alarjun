#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node N;
N *top;
int item;
int a;
int z;
void rem();
void push();
void print();
int main()
{
rem();
print();
}
void rem()
{
	top=NULL;
	printf("Enter no. :");
	scanf("%d",&a);
	printf("Enter base. :");
	scanf("%d",&z);
if(a<z){
	printf("Invalid no.");
}
else
{
do
{
item=a%z;
push();
a=a/z;
} while(a!=0);
}
}
	
void push()
{
	N *p;
	p=(N*)malloc(sizeof(N));
	p->data=item;
	p->next=top;
	top=p;
}

void print()
{
	N *p;
	p=top;
	while(p!=NULL)
	{
		printf("\n%d",p->data);
		p=p->next;
	}
}



