#include <iostream>

int *myfun() {
    int num = 100;
    int *ptr = new int;
    //int *ptr = &num; //ptr cant access num because it is a local variable //the local variable doesnt exist by the time ptr= myfun() is ran
    *ptr = num;
    std::cout << "in the function: " << *ptr << std::endl;
    return ptr;
}

int main() {

    int *ptr;
    ptr = myfun();
    std::cout << "In main : " << *ptr << std::endl;

    return 0;
}