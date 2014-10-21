/**
 * User: Nightink
 */

#ifndef LEARN_STACK
#define LEARN_STACK

#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    int data[30];
    int top;
} link_stack;

// 创建堆栈内存
void link_stack_creat(link_stack **s);
// 添加数值
void link_stack_push(link_stack *s, int n);
// 获取数值
int link_stack_pop(link_stack *s);
// 显示数值
void dispaly_1(link_stack *s);
void dispaly_2(link_stack *s);

// 释放内存
void free_stack(link_stack **s);

#endif