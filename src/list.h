/**
 * User: Nightink
 */

#ifndef LEARN_LIST
#define LEARN_LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    int data;
    struct node* next;
} link_list;

// 创建链表
void link_creat(link_list *head);
void link_display(link_list *head);
// 删除链表结点
void link_del(link_list *head);
void link_display(link_list *head);
// 添加链表结点
void link_insert(link_list *head);
void link_display(link_list *head);

// 释放内存
void free_stack(link_list **s);

#endif