#include"../../include/main.h"
#include<stdio.h>
#include<stdlib.h>
void display_node(Link p){
	printf("姓名：%s\n",p->name);
	printf("性别：%s\n",p->sex);
	printf("生日：%s\n",p->birthday);
	printf("电话：%s\n",p->phone);
	printf("邮政编码：%s\n",p->postcode);
	printf("地址：%s\n",p->addr);
	printf("----------next----------\n");

}
