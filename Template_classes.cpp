#include<iostream>
using namespace std;
template<class T>
class calculator{
private:
T num1, num2;
public:
calculator(T n1, T n2){
num1 = n1;
num2 = n2;
}
T add(){ return num1+num2;}
T subtract(){ return num1 - num2;}
T multiply(){ return num1 * num2;}
T divide(){
if (num2!=0)
return num1/num2;
else{
cout<<"Error! Division by zero."<<endl;
return 0;
}
}
};
int main(){
calculator<int> intcalc(10,5);
cout<< "Int Calculation:" << endl;
cout<< "Addition = " << intcalc.add()<<endl;
cout<< "Subtraction = " << intcalc.subtract()<<endl;
cout<< "Multiplication = " << intcalc.multiply()<<endl;
cout<< "Division = " <<intcalc.divide()<<endl;
cout<< "-----------------------"<<endl;
calculator<double> doublecalc(10.5,2.5);
cout<< "Double Calculation:" << endl;
cout<< "Addition = " << doublecalc.add()<<endl;
cout<< "Subtraction = " << doublecalc.subtract()<<endl;
cout<< "Multiplication = " << doublecalc.multiply()<<endl;
cout<< "Division = " <<doublecalc.divide()<<endl;
cout<< "-----------------------"<<endl;
}
