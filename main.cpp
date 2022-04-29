#include <iostream>
#include "complex.h"

void(*yk(int* arr, unsigned size))(int*, unsigned) {
    int sum = 0;
    for (unsigned i = 0; i < size; i++) {
        sum += arr[i];
    }
    if (sum > arr[0]) {
        return sort3;
    }
}

int main(){
    int array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 1000 + 1;
    }
    void (*qw)(int* arr, unsigned size);
    qw = yk(array, 10);
    qw(array, 10);
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << ' ';
    }
}