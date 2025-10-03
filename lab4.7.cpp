#include <iostream>
#include <stdexcept>
using namespace std;

class Resource {
public:
	~Resource() noexcept(false){  //noexcept表示它不应该抛出异常
            throw runtime_error("Resource destroyed!"); //当Resource对象被销毁时，会抛出异常runtime_error。
	}
};

int main(){
    try{
        Resource res;
    }catch(const exception & e){
        cerr << e.what() <<endl;
    }
    return 0;
}