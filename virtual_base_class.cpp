#include<iostream>
using namespace std;
class shape{
	public:
		virtual void calculate(){
		cout<<"Area of your shape";
	}
	virtual ~shape(){
		cout<<"Shape of destructor call\n";
	}
};
class Rectangle:public shape{
	public:
		int width,height, area;
		void calculate()
		{
			cout<<"Enter width of rectangle: ";
			cin>>width;
			cout<<"Enter height of rectangle: ";
			cin>>height;
			area=height*width;
			cout<<"Area of rectangle: "<<area<<"\n";
			
		}
		virtual ~Rectangle(){
			cout<<"Rectangle Destructor call\n";
		}
};
class square:public shape{
	public:
		int side,area;
		void calculate()
		{
			cout<<"Enter one side of your square: ";
			cin>>side;
			area=side*side;
			cout<<"Area of square: "<<area<<"\n";
		}
		virtual ~square(){
			cout<<"square desturctor call\n";
		}
};
int main()
{
	shape* s;
	Rectangle r;
	s=&r;
	s->calculate();
	square sq;
	s=&sq;
	s->calculate();
	return 0;
}
