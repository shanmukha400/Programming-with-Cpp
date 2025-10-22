#include<iostream>
using namespace std;
class parent{
public:
parent(){
cout<< "Parent class constructor\n";
}
~parent()
{
cout<< "Parent class constructor\n";
}
};
class child:public parent
{
public:
child()
{
cout<< "Child class constructor\n";
}
~child() 
{
cout<< "Child class destructor\n";
}
};
int main(){
child c;
return 0;
}
