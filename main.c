#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "cmd/fibonacci.h"
#include "cmd/tree.h"
#include "structure/stack.h"
#include "structure/queue.h"
#include "structure/array.h"

int main() {
    Stack s = newStack(sizeof(int));
    inStackForInt(s, 183);
    printf("%d\n", outStackForInt(s));
    return 0;
}