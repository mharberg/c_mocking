#include<stddef.h>
#include <stdio.h>

#include "foo.h"
#include "mock_foo.h"
#include "mocking.h"


int foo_method(int a, int b)
{

    int ret;

    int * ret_ptr;

    MockObj* mock;

    MockFooArgsS * args_ptr;

    mock = get_mock_object(FOO_METHOD);

    args_ptr = (MockFooArgsS *)mock->args;

    (args_ptr + mock->call_cntr)->a = a;
    (args_ptr + mock->call_cntr)->b = b;

    ret_ptr = (int *)mock->returns;

    ret = *(ret_ptr + mock->call_cntr);

    if (mock->b != NULL)
    {
        int (*behaviour)(int, int) = (int(*)(int, int))mock->b;
        ret = behaviour(a, b);
    }
    
    mock->call_cntr++;
    return ret;
}