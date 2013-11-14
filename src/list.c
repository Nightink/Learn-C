/**
 * User: Nightink
 */

#include "list.h"

void link_creat(link_list *head) {

    int n; 
    link_list *r, *p;

    r = head;
    printf("%s\n", "请输入结点个数:");
    scanf("%d", &n);
    printf("%s\n", "请输入列表数据:");

    for(int i=0; i<n; i++) {

        p = (link_list*) malloc(sizeof(link_list));
        scanf("%d", &(p->data));
        r->next = p; 
        r = p;
    } 
    r->next = NULL;  
}

void link_display(link_list *head) {

    link_list *p; 
    p = head->next; 

    printf("%s\n", "显示列表结点:");
    while(p) { 

        printf("%d ", p->data);
        p = p->next; 
    }
    printf("\n");
}

void link_del(link_list *head) {

    link_list *p, *s;
    int i,j = 1;
    printf("%s\n", "输入删除位置:");
    scanf("%d", &i);
    p = head;

    while(p && j < i) {
        p=p->next;
        j++;
    }

    if(p == NULL || p->next == NULL) {

        printf("%s\n", "删除结点找不到.");

    } else {

        s = p->next;
        p->next = s->next;
        free_stack(&s);
    }
}

void link_insert(link_list *head) {

    link_list *p, *s;
    int i, j = 0;

    printf("%s\n", "插入新结点位置:");
    scanf("%d", &i);
    p = head;
    while(p && j < i-1) {
        p = p->next;
        j++;
    }

    if(p == NULL) {
        printf("%s\n", "插入结点找不到.");
    } else {

        s = (link_list*) malloc(sizeof(link_list));
        printf("%s\n", "请输入结点值:");
        scanf("%d", &(s->data));
        s->next = p->next;
        p->next = s;
    }
}

void free_stack(link_list **s) {

    if(*s != NULL) {

        printf("%s\n", "内存释放成功");
        free(*s);
        *s = NULL;
    }
}

int main(int argc, const char **argv) {

    link_list *head = (link_list*) malloc(sizeof(link_list));

    // 创建链表
    link_creat(head);
    link_display(head);
    // 删除链表结点
    link_del(head);
    link_display(head);
    // 添加链表结点
    link_insert(head);
    link_display(head);

    // 释放内存
    free_stack(&head);

    return 0;
}