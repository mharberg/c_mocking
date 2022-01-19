#include "bar.h"
#include "foo.h"

int bar_method(int a)
{
    return foo_method(a, 2);
}