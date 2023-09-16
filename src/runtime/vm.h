//
// Created by Yaman Alhalabi on 13.09.2023.
//

#ifndef TLANG_C_VM_H
#define TLANG_C_VM_H

#include "../core/chunk.h"
#include "../core/value.h"
#include "../core/table.h"
#include "../core/object.h"

#define FRAMES_MAX 64
#define STACK_MAX (FRAMES_MAX * UINT8_COUNT)

typedef struct {
    ObjFunction* function;
    uint8_t* ip;
    Value* slots;
} CallFrame;

typedef struct {
    CallFrame frames[FRAMES_MAX];
    int frameCount;

    Value stack[STACK_MAX];
    Value* stackTop;

    Table globals;

    Table strings;
    Obj* objects;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;


void initVM();
void freeVM();
void push(Value value);
Value pop();

InterpretResult interpret(const char* source);
extern VM vm;

#endif //TLANG_C_VM_H
