//
// Created by Yaman Alhalabi on 13.09.2023.
//
#include "../common.h"
#include "./memory.h"
#include "value.h"

#ifndef TLANG_C_CHUNK_H
#define TLANG_C_CHUNK_H

typedef enum {
    OP_RETURN,
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_NEGATE,
    OP_CONSTANT,
    OP_NIL,
    OP_TRUE,
    OP_FALSE,
    OP_NOT,
    OP_EQUAL,
    OP_PRINT,
    OP_JUMP_IF_FALSE,
    OP_JUMP,
    OP_LOOP,
    OP_CALL,
    OP_GREATER,
    OP_LESS,
    OP_POP,
    OP_DEFINE_GLOBAL,
    OP_GET_GLOBAL,
    OP_SET_GLOBAL,
    OP_GET_LOCAL,
    OP_SET_LOCAL,
} OpCode;

typedef struct {
    int count;
    int capacity;
    int* lines;
    ValueArray constants;
    uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif //TLANG_C_CHUNK_H
