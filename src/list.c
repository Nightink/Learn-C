/**
 * User: Nightink
 */

#include "list.h"

void node_creat(node *head) {

    int n; 
    node *r, *p;

    r = head;
    printf("%s\n", "请输入结点个数:");
    scanf("%d", &n);
    printf("%s\n", "请输入列表数据:");

    for(int i=0; i<n; i++) {

        p = (node*) malloc(sizeof(node));
        scanf("%d", &(p->data));
        r->next = p; 
        r = p;
    } 
    r->next = NULL;  
}

void node_display(node *head) {

    node *p; 
    p = head->next; 

    printf("%s\n", "显示列表结点:");
    while(p) { 

        printf("%d ", p->data);
        p = p->next; 
    }
    printf("\n");
}

node* node_del(node *head, int i) {

    node *p, *s;
    int j = 1;

    p = head;

    while(p && j < i) {
        p=p->next;
        j++;
    }

    if(p == NULL || p->next == NULL) {

        return NULL;

    } else {

        s = p->next;
        p->next = s->next;
        
        return s;
    }
}

void node_insert(node *head, int i, int data) {

    node *p, *s;
    int j = 0;

    p = head;
    while(p && j < i-1) {
        p = p->next;
        j++;
    }

    if(p == NULL) {
        printf("%s\n", "插入结点找不到.");
    } else {

        s = (node*) malloc(sizeof(node));
        s->data = data;
        s->next = p->next;
        p->next = s;
    }
}

void free_stack(node **s) {

    if(*s != NULL) {

        printf("%s\n", "内存释放成功");
        free(*s);
        *s = NULL;
    }
}

// int main(int argc, const char **argv) {

//     int i, j;
//     node *head = (node*) malloc(sizeof(node));

//     // 创建链表
//     node_creat(head);
//     node_display(head);
//     // 删除链表结点
//     node_del(head);
//     node_display(head);
//     // 添加链表结点

//     printf("%s\n", "插入新结点位置:");
//     scanf("%d", &i);

//     printf("%s\n", "插入值:");
//     scanf("%d", &j);

//     node_insert(head, i, j);
//     node_display(head);

//     // 释放内存
//     free_stack(&head);

//     return 0;
// }