#include <stddef.h>
#include <stdio.h>
#include "mocking.h"



MockObj mockObjects [] = {
    {
        .call_cntr = 0,
        .args = NULL,
        .args_size = 0,
        .b = NULL,
        .returns = NULL,
        .returns_size = 0,
    }
};
/*
MockObj * alloc_mock_object(char* name_buffer, unsigned int name_length)
{

}

void dealloc_mock_object();
*/

MockObj* get_mock_object(MockE mock )
{
    return &mockObjects[mock];
}