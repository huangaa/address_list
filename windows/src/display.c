#include"../../include/main.h"
#include<stdio.h>
#include<stdlib.h>
void display(Link head){
	Link p = head->next;
	is_link_exits(head);
	if(p == NULL){
		printf("the link is empty!\n");
		return;
	}
	while(p != NULL){

		display_node(p);
		p = p->next;
	}
}


