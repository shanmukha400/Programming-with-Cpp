#include<iostream>
using namespace std;
class A{
public:
A(){cout<<"A constructor\n";}
~A(){cout<<"A Destructor\n";}
void show(){
cout<<"Function of class A\n";
}
};
class B:virtual public A{
 public:
 B(){cout<<"B constructor\n";}
 ~B(){cout<<"B Destructor\n";}
};
class c:virtual public A{
 public:
 c(){cout<<"c constructor\n";}
~c(){cout<<"c Destructor\n";}
};
class D:public B,public c{
 public:
 D(){cout<<"D constructor\n";}
 ~D(){cout<<"D Destructor\n";}
};
int main(){
D obj;
obj.show();
return 0;
}
