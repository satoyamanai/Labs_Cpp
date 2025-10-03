#include <iostream>
#include <new>  

int main() {  //try用于包含可能会引发异常的代码，在try中的代码发生异常，程序会立即跳转到相应的catch中去处理这个异常。
    try {
        int* hugeArray = new int[1000000000000];   //new的作用：动态分配内存，可以创建数组或对象，并返回一个指向所分配内存的指针。
        delete[] hugeArray;  //使用new分配的内存需要用delete或者delete[]来释放。
    } catch (const std::bad_alloc& e) {
        std::cout << "Out of memory!" << std::endl;
    }

    return 0;
}