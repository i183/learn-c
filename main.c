#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "fibonacci.h"
#include "tree.h"
#include "structure/stack.h"
#include "structure/queue.h"

int main() {
    Stack pStructure = newStack(1);
    outStackForInt(pStructure);
    return 0;
}