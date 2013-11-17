/**
 * User: Nightink
 */

#ifndef LEARN_ARRAY
#define LEARN_ARRAY

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// 定义数组结构
typedef struct _array {

    node *element;
    int length;
} array;

typedef void (*pf)(node*);

// 添加数值
void array_push(array *head, int n);
void array_unshift(array *head, int n);
// 弹出值
node* array_pop(array *head);
node* array_shift(array *head);

// 遍历数据
void array_each(array *head, pf);

// 释放内存
// void free_array(array **a);
// void free_node(node **n);

#endif