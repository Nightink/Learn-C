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
    int top;
} array;

// 添加数值
void array_push(array *s, int n);

// 遍历数据
void array_each(array *s);

// 释放内存
// void free_array(array **a);
// void free_node(node **n);

#endif