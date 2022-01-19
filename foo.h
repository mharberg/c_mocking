#ifndef FOO_H
#define FOO_H

typedef struct {
    int a;
    int b;
}ArgS;

int foo_method(int a, int b);

void foo_method_two(ArgS * args);

#endif
