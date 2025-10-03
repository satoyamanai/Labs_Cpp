#include<iostream>
using namespace std;

namespace VeryLongNamespaceName{
    void function(){
        cout << "Hello World" << endl;
    }
}

namespace Short = VeryLongNamespaceName;

int main()
{
    Short::function();
    return 0;
}