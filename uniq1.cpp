#include <iostream>
#include <memory>

#define SIZE 5

int main() {
    int num = 100;
    std::unique_ptr<int> ptr1;
    ptr1 = std::make_unique<int>(num);

    std::unique_ptr<int> ptr2;
    ptr2 = move(ptr1);
    std::cout << "UniquePTR: " << *ptr2 << std::endl;
    std::cout << ptr2.get() << std::endl << std::endl;

    int *rawptr = ptr2.get();
    std::cout << *rawptr << std::endl << std::endl;

    std::unique_ptr<int []> p3 = std::make_unique<int []>(SIZE);

    for (int i = 0; i < SIZE; i++) {
        p3[i] = 100 + i;
        std::cout << "p3[" << i << "]: " << p3[i] << std::endl;
    }
}