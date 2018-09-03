//
// Created by i183 on 2018/8/25.
//

#include <stdio.h>
#include "sort.h"
#include "../common/global.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *array, int n) {
    for (int i = 0; i < n - 1; i++) {
        boolean flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array + j, array + j + 1);
                flag = true;
            }
        }

        if (flag == false) {
            return;
        }

        printArray(array, n);
    }
}

void selectionSort(int *array, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }

        if (min != i) {
            swap(array + i, array + min);
        }

        printArray(array, n);
    }
}

void insertionSort(int *array, int n) {
    for (int i = 1; i < n; i++) {
        int e = array[i];
        int j = i - 1;
        while (j >= 0 && e < array[j]) {
            array[j + 1] = array[j--];
        }
        array[j + 1] = e;

        printArray(array, n);
    }
}

void shellSort(int *array, int n) {
    int h = 0;
    while (h <= n) {
        h = 3 * h +  1;
    }
    while (h >= 1) {
        for (int i = h; i < n; i++) {
            int j = i - h;
            int e = array[i];
            while (j >= 0 && array[j] > e) {
                array[j + h] = array[j];
                j = j - h;
            }
            array[j + h] = e;
            printArray(array, n);
        }
        h = (h - 1) / 3;
        printf("\n");
    }
}

/**
 * 归并排序-合并
 */
void merge_10398_(int *array, int left, int mid, int right, int *temp) {
    int i = left, j = mid + 1;
    int k = 0;

    while (i <= mid && j <= right) {
        if (array[i] <= array[j]) {
            temp[k++] = array[i++];
        } else {
            temp[k++] = array[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = array[i++];
    }
    while (j <= right) {
        temp[k++] = array[j++];
    }

    for (int l = 0; l < k; l++) {
        array[left + l] = temp[l];
    }

}

void mergeSort_10398_(int *array, int left, int right, int *temp) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort_10398_(array, left, mid, temp);
        mergeSort_10398_(array, mid + 1, right, temp);

        merge_10398_(array, left, mid, right, temp);
    }
}

void mergeSort(int *array, int n) {
    if (n <= 0) {
        return;
    }

    int temp[n];
    mergeSort_10398_(array, 0, n - 1, temp);
}

void printArray(const int *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", *(array + i));
    }
    printf("\n");
}
