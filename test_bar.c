
#include<stdio.h>

#include "bar.h"
#include "foo.h"
#include "mock_foo.h"
#include "mocking.h"

int foo_override(int a, int b)
{
    return a * b;
}

void test_bar_method(void)
{
    MockObj* foo_method_mock;

    int returns[10] = {0};

    MockFooArgsS args[10];    

    int res;

    foo_method_mock = get_mock_object(FOO_METHOD);

    returns[0] = 10;

    foo_method_mock->returns = returns;

    foo_method_mock->args = args;

    foo_method_mock->b = (Behaviour)&foo_override;

    res = bar_method(10);

    printf("mock called with: %i, %i\n", args[0].a, args[0].b);

    printf("%i\n", res);

}

int main(void)
{
    test_bar_method();
    return 0;
}