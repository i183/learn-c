#include <stdlib.h>
#include "array.h"
#include "../common.h"

int isOutRange() {

}

Array newArray(int typeSize, int initialCapacity) {
    Array arr = malloc(sizeof(struct ArrayStructure));
    arr->data = malloc(initialCapacity * typeSize);
    arr->typeSize = typeSize;
    arr->capacity = initialCapacity;
    arr->size = 0;
}

Array newArrayDefault(int typeSize) {
    return newArray(typeSize, ARRAY_DEFAULT_CAPACITY);
}

void addArray(Array arr, void *item) {

}

void insertArray(Array arr, int index, void *item) {

}

void removeArray(Array arr, int index) {

}

void *getArray(Array arr, int index, void *dst) {

}

void resetArrayEmpty(Array arr) {

}

void freeArray(Array arr) {

}

void addArrayForInt(Array arr, int item) {

}

void addArrayForLong(Array arr, long item) {

}

void addArrayForDouble(Array arr, double item) {

}

void addArrayForChar(Array arr, char item) {

}

int getArrayForInt(Array arr, int index) {

}

long getArrayForLong(Array arr, int index) {

}

double getArrayForDouble(Array arr, int index) {

}

char getArrayForChar(Array arr, int index) {

}