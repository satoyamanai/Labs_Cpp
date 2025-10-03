#include<iostream>
#include<stdexcept>
using namespace std;

double divide(int a, int b)
{
    if(b == 0)
    {
        throw runtime_error("Divide by zero");
    }
    return static_cast<double>(a) / b;
}

int main(){
    try{
        cout<<divide(10,0)<<endl;
    }catch(const runtime_error & e){
        cerr<<e.what()<<endl;
    }
    return 0;
}