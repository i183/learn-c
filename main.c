#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "fibonacci.h"
#include "tree.h"
#include "structure/stack.h"
#include "structure/queue.h"
#include "structure/array.h"

int main() {
    Stack s = newStack(sizeof(int));
    outStackForInt(s);
    return 0;
}