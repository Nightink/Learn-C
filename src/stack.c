#include <stdio.h>
#include <stdlib.h>

typedef struct Node {

    int data[30];
    int top;
} LinkStack;

void LinkStack_Cre(LinkStack **s) {

    *s = (LinkStack*) malloc(sizeof(LinkStack));

    if(*s) {

        (*s)->top = -1;
        printf("%s\n", "内存创建成功");
    } else {

        printf("%s\n", "创建失败");
        exit(0);
    }
}

void LinkStack_Push(LinkStack *s, int n) {

    if(s->top == 29) {

        printf("%s\n", "空间不足");
    } else {

        s->top++;
        s->data[s->top] = n;  
    }
}

int LinkStack_Pop(LinkStack *s) {

    int i;
    if(s->top == -1) {

        printf("%s\n", "暂无数据");
        return 0;
    } else {

        i = s->data[s->top];
        s->top--;
        return i;
    }
}

void dispaly_1(LinkStack *s) {

    for (int i = 0; i < 7; i++) {

        LinkStack_Push(s, i);
        printf("%d ", LinkStack_Pop(s));
    }

    printf("\n");
}

void dispaly_2(LinkStack *s) {

    for (int i = 0; i < 7; i++) {

        LinkStack_Push(s, i);
    }

    for (int i = 0; i < 7; i++) {

        printf("%d ", LinkStack_Pop(s));
    }

    printf("\n");
}

void freeStack(LinkStack **s) {

    if(*s != NULL) {

        printf("%s\n", "内存释放成功");
        free(*s);
        *s = NULL;
    }
}

int main(int argc, const char **argv) {

    LinkStack *s = NULL;

    LinkStack_Cre(&s);

    dispaly_1(s);
    dispaly_2(s);

    freeStack(&s);

    return 0;
}
