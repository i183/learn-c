#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "cmd/fibonacci.h"
#include "cmd/tree.h"
#include "structure/stack.h"
#include "structure/queue.h"
#include "structure/array.h"
#include "sort/sort.h"

const int n = 10;
int array[] = {54, 28, 16, 34, 73, 62, 95, 60, 26, 43};

int main() {
    printArray(array, n);
    bubbleSort(array, n);
    return 0;
}