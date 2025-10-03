#include<iostream>
using namespace std;

void applyGravity()
{
    cout << " Gravity applied " << endl; 
}

namespace Game{
    namespace Physics{
        void applyGravity(){
            cout << " Gravity applied " << endl;
        }
    }
}

int main()
{
    applyGravity();
    return 0;
}