#ifndef MONKECRAFT_H
#define MONKECRAFT_H

typedef struct{
    void new(char type[], float x, float y, float z); // maybe block_t new("Dirt", 1,1,1) idk try but nothing will happen
} block_t

// World size (2x2x2 for now)
#define MAX_WORLD_WIDTH 2 // x
#define MAX_WORLD_HIGHT 2 // y
#define MAX_WORLD_DEPTH 2 // z

#endif MONKECRAFT_H
