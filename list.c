#include <stdio.h>
#include <stdlib.h>

typedef struct Node {

    int data;
    struct Node* next;
} LinkList;

void LinkCreat(LinkList* head) {

    int n; 
    LinkList* r; 
    LinkList* p;

    r = head;
    printf("%s\n", "请输入结点个数：");
    scanf("%d", &n);
    printf("%s\n", "请输入列表数据。");

    for(int i=0; i<n; i++) {

        p = (LinkList*) malloc(sizeof(LinkList));
        scanf("%d", &(p->data));
        r->next = p; 
        r = p;
    } 
    r->next = NULL;  
}

void LinkDisplay(LinkList *head) {

    LinkList* p; 
    p = head->next; 

    printf("%s\n", "显示列表结点");
    while(p) { 

        printf("%d ", p->data);
        p = p->next; 
    }
    printf("\n");
}

void LinkDel(LinkList *head) {

    LinkList *p;
    LinkList *s;
    int i,j=1;
    printf("%s\n", "输入删除位置");
    scanf("%d", &i);
    p = head;

    while(p && j < i) {
        p=p->next;
        j++;
    }

    if(p->next == NULL) {

        printf("%s\n", "结点为空");

    } else {

        s=p->next;
        p->next=s->next;
        free(s);
    }
}

void LinkInsert(LinkList *head) {

    LinkList *p;
    LinkList *s;
    int i,j=0;

    printf("%s\n", "插入新结点");
    scanf("%d", &i);
    p = head;
    while(p && j < i-1) {
        p = p->next;
        j++;
    }

    if(p == NULL) {
        printf("%s\n", "结点为空");
    } else {

        s = (LinkList*) malloc(sizeof(LinkList));
        printf("%s\n", "插入新结点");
        scanf("%d", &(s->data));
        s->next=p->next;
        p->next=s;
    }
}

int main(int argc, const char **argv) {

    LinkList head;

    // 创建链表
    LinkCreat(&head);
    LinkDisplay(&head);
    // 删除链表结点
    LinkDel(&head);
    LinkDisplay(&head);
    // 添加链表结点
    LinkInsert(&head);
    LinkDisplay(&head);

    return 0;
}