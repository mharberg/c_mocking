#ifndef MOCKING_H
#define MOCKING_H

typedef enum
{
    FOO_METHOD = 0,
    FOO_METHOD_ONE,
    NUM_MOCK_METHODS,
}MockE;

typedef void (*Behaviour)(void);

typedef struct MockObj_tag{
    Behaviour b;
    void * args;
    unsigned int args_size;
    void * returns;
    unsigned int returns_size;
    unsigned int call_cntr;
}MockObj;

MockObj* get_mock_object(MockE mock);

#endif