#include"../../include/main.h"
#include<stdio.h>
#include<stdlib.h>
Link search_node_by_name(Link head,char name[8]){
	is_link_exits(head);
	Link p = head->next;
	while(p != NULL){

		if(strcmp(p->name, name) == 0){

			return p;
		}
		p = p->next;
	}
	return NULL;
}