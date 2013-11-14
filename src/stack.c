/**
 * User: Nightink
 */

#include "stack.h"

// 函数传值是 拷贝传递 在创建内存空间的时候  需要采用指针的指针来处理
void link_stack_creat(link_stack **s) {

    *s = (link_stack*) malloc(sizeof(link_stack));

    if(*s) {

        (*s)->top = -1;
        printf("%s\n", "内存创建成功");
    } else {

        printf("%s\n", "创建失败");
        exit(0);
    }
}

void link_stack_push(link_stack *s, int n) {

    if(s->top == 29) {

        printf("%s\n", "空间不足");
    } else {

        s->top++;
        s->data[s->top] = n;  
    }
}

int link_stack_pop(link_stack *s) {

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

void dispaly_1(link_stack *s) {

    for (int i = 0; i < 7; i++) {

        link_stack_push(s, i);
        printf("%d ", link_stack_pop(s));
    }

    printf("\n");
}

void dispaly_2(link_stack *s) {

    for (int i = 0; i < 7; i++) {

        link_stack_push(s, i);
    }

    for (int i = 0; i < 7; i++) {

        printf("%d ", link_stack_pop(s));
    }

    printf("\n");
}

void free_stack(link_stack **s) {

    if(*s != NULL) {

        printf("%s\n", "内存释放成功");
        free(*s);
        *s = NULL;
    }
}

int main(int argc, const char **argv) {

    link_stack *s = NULL;

    link_stack_creat(&s);

    dispaly_1(s);
    dispaly_2(s);

    free_stack(&s);

    return 0;
}