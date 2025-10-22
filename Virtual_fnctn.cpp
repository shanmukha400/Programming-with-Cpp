#include <iostream>
using namespace std;
class Animal {
public:
 virtual void makeSound() {
 cout << "Animal makes a sound" << endl;
 }
};
class Dog : public Animal {
public:
 void makeSound() override {
 cout << "Dog barks" << endl;
 }
};
class Cat : public Animal {
public:
 void makeSound() override {
 cout << "Cat meows" << endl;
 }
};
int main()
{
 
 Animal* animalPtr;
Dog d;
 Cat c;
animalPtr = &d;
animalPtr->makeSound(); 
animalPtr = &c;
animalPtr->makeSound(); 
return 0;
}

