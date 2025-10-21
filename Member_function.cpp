#include<iostream>
using namespace std;
class complex
{
	private:
		float real;
		float imag;
	public:
		//contructor
		complex(float r=0,float i=0): real(r),imag(i){}
		//display function
		void display(){
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		//unary operators overloading(negation)
		complex operator-()
		{
			return complex(-real,-imag);
		}
		//unary opeator overloading(pre-increment)
		complex operator++(){
			++real;
			++imag;
			return *this;
		}
		//binary operator overloading(addition)
		complex operator+(const complex& obj) {
			return complex(real+obj.real,imag+obj.imag);
		}
		//binary operator overloading(subtraction)
		complex operator-(const complex& obj)
		{
			return complex(real - obj.real,imag-obj.imag);
		}
};
int main()
{
	complex c1(3,4),c2(1,2),c3;
	cout<<"original complex numbers: "<<endl;
	cout<<"c1= ";c1.display();
	cout<<"c2= ";c2.display();
	//unary-operator
	c3=-c1;
	cout<<"\nAfter unary - on c1:" <<endl;
	cout<<"c3= ";
	c3.display();
	++c1;
	//binary + operator
	c3=c1+c2;
	cout<<"\n After c1+c2: "<<endl;
	cout<<"c3= ";c3.display();
	//binary - operator
	c3=c1-c2;
	cout<<"\nAfter c1-c2:"<<endl;
	cout<<"c3= ";c3.display();
	return 0;
}
