#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "fibonacci.h"
#include "tree.h"
#include "structure/stack.h"
#include "structure/queue.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 0, 0};
    memcpy(arr + 2, arr + 1, 6 * sizeof(int));
    for (int i = 0; i < 9; ++i) {
        printf("%d\n", arr[i]);
    }
    return 0;
}