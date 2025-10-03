#include <iostream>
#include <vector>
using namespace std;
class Animal {
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() {}
};
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof, woof!" << endl;
    }
};
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Miao, miao!" << endl;
    }
};
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "Moo, moo!" << endl;
    }
};
void Rightsound(const vector<Animal*>& animals) { 
    for (const auto& animal : animals) {
        animal->makeSound();
    }
}
int main() {
    vector<Animal*> animals = {
        new Dog(),
        new Cat(),
        new Cow(),
        new Dog(),
        new Cat(),
    };
    
    cout << "Animal sounds:" << endl;
    Rightsound(animals);
    
    for (const auto& animal : animals) {
        delete animal;
    }
    
    return 0;
}