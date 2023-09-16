//
// Created by Yaman Alhalabi on 13.09.2023.
//

#ifndef TLANG_C_DEBUG_H
#define TLANG_C_DEBUG_H
#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif //TLANG_C_DEBUG_H
