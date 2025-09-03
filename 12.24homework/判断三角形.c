#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	struct STU{
		char name[10];
		int code;
		float math;
	}stu1;
	
	struct node{
		int x;
		int y;
		DIR direction;
		struct node*next;
		struct node*prev;
	};
	typedef struct node NODE;
	NODE *head;
	NODE *tail;

int main()
{
	NODE snakebody[5];
	snakebody[0].x=1;
	snakebody[0].y=1;
	snakebody[0].direction=UP;
	snakebody[0].next=&snakebody[1];
	snakebody[0].prev=NULL;
	
	snakebody[1].x=1;
	snakebody[1].y=2;
	snakebody[1].direction=UP;
	snakebody[1].next=&snakebody[2];
	snakebody[1].prev=&snakebody[0];
	
	snakebody[2].x=1;
	snakebody[2].y=3;
	snakebody[2].direction=UP;
	snakebody[2].next=&snakebody[3];
	snakebody[2].prev=&snakebody[1];
	
	snakebody[3].x=1;
	snakebody[3].y=4;
	snakebody[3].direction=UP;
	snakebody[3].next=&snakebody[4];
	snakebody[3].prev=&snakebody[2];
	
	snakebody[4].x=1;
	snakebody[4].y=5;
	snakebody[4].direction=UP;
	snakebody[4].next=NULL;
	snakebody[4].prev=&snakebody[3];
	
	head=&snakebody[0];
	tail=&snakebody[4];
	
	NODE *tempNODE;
	tempNODE=head;
	while(tempNODE!=NULL){
		printf("x=%d",tempNODE->next);
		tempNODE=tempNODE.prev;
	}
	node *ptr;
	ptr=(NODE *)alloc(sizeof(NODE));
	ptr->x=1;
	ptr->y=2;
	ptr->next=NULL;
	ptr->prev=head;
	
	ptr=(NODE *)alloc(sizeof(NODE));
	ptr->x=1;
	ptr->y=2;
	ptr->next=NULL;
	ptr->prev=head->next;
	
	ptr=(NODE *)alloc(sizeof(NODE));
	ptr->x=1;
	ptr->y=2;
	ptr->next=NULL;
	ptr->prev=head->next->next;
	
	ptr=(NODE *)alloc(sizeof(NODE));
	ptr->x=1;
	ptr->y=2;
	ptr->next=NULL;
	ptr->prev=head->next->next->next;
	
	head->next->next->next->next=ptr;
	tail=ptr;
	
	return 0;
}
