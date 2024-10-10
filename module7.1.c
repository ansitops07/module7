#include <iostream>

int main() {

    int* p = new int;

    *p = 10;

    std::cout << "Value of p: " << *p << std::endl;

      int* arr = new int[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }

    std::cout << "Values of arr: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete p;

    delete[] arr;

    return 0;
}
