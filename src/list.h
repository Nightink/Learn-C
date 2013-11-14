/**
 * User: Nightink
 */

#ifndef LEARN_LIST
#define LEARN_LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct _node {

    int data;
    struct _node* next;
} node;

// 创建链表
void node_creat(node *head);
void node_display(node *head);
// 删除链表结点
void node_del(node *head);
void node_display(node *head);
// 添加链表结点
void node_insert(node *head, int i, int data);
void node_display(node *head);

// 释放内存
void free_stack(node **s);

#endif