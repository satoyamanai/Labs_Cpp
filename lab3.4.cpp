#include<iostream>

//namespace A { int x = 10; } 
//namespace B { int x = 20; } 
//using namespace A; 
//using namespace B; 
//int main() { std::cout << x; }
//Причина, по которой он не может быть скомпилирован, — конфликт имен. Компилятор не может определить, происходит ли x из A или B.
//无法被编译的原因是命名冲突，编译器无法确定x来自A或是B。

namespace A { int x = 10; } 
namespace B { int x = 20; } 
namespace AA = A; 
namespace BB = B; 
int main() { std::cout << AA::x; }