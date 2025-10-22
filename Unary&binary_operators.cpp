#include <iostream>
using namespace std;
class Complex {
private:
 float real;
 float imag;
public:
 Complex(float r = 0, float i = 0) : real(r), imag(i) {}
 void display() const {
 cout << real << " + " << imag << "i" << endl;
 }
 friend Complex operator-(const Complex& obj); 
 friend Complex operator++(Complex& obj); 
 friend Complex operator+(const Complex& c1, const Complex& c2); 
 friend Complex operator-(const Complex& c1, const Complex& c2); 
};
Complex operator-(const Complex& obj) {
 return Complex(-obj.real, -obj.imag);
}
Complex operator++(Complex& obj) {
 ++obj.real;
 ++obj.imag;
 return obj;
}
Complex operator+(const Complex& c1, const Complex& c2) {
 return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
Complex operator-(const Complex& c1, const Complex& c2) {
 return Complex(c1.real - c2.real, c1.imag - c2.imag);
}
int main() {
 Complex c1(3, 4), c2(1, 2), c3;
 cout << "Original complex numbers: " << endl;
 cout << "c1 = "; c1.display();
 cout << "c2 = "; c2.display();
 c3 = -c1;
 cout << "\nAfter unary - on c1:" << endl;
 cout << "c3 = "; c3.display();
 ++c1;
 cout << "\nAfter ++c1:" << endl;
 cout << "c1 = "; c1.display();
 c3 = c1 + c2;
 cout << "\nAfter c1 + c2:" << endl;
 cout << "c3 = "; c3.display();
 c3 = c1 - c2;
 cout << "\nAfter c1 - c2:" << endl;
 cout << "c3 = "; c3.display();
 return 0;
