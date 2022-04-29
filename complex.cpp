#include "complex.h"


void sort1(int* arr, unsigned size)
{
    int b = size;
    for (int i = 0; i < size; i++) {
        std::swap(arr[i], arr[b]);
        b--;
    }
}

void sort2(int* arr, unsigned size)
{
    int a = size, b = 0;
    for (int i = 0; i < size - 1; i++) {
        a = size; b = 0;
        for (int j = i; j < size; j++) {
            if (a > arr[j]) {
                a = arr[j]; b = j;
            }
        }

        std::swap(arr[i], arr[b]);

    }
}

void sort3(int* arr, unsigned size){
    int a = 0, b = 0;
    for (int i = 0; i < size - 1; i++) {
        a = 0; b = 0;
        for (int j = i; j < size; j++) {
            if (a < arr[j]) {
                a = arr[j]; b = j;
            }
        }
        std::swap(arr[i], arr[b]);
    }
}
