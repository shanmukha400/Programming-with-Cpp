#include<iostream>
using namespace std;
class vehicle{
	public:
		vehicle(){
			cout<<"This is a vehicle"<<endl;
		}
};
//sub class derived from a single base classes
class car:public vehicle{
	public:
		car(){
			cout<<"This vehicle is car"<<endl;
		}
};
int main()
{
	//creating object of sub class will
	//invoke the constructor of base classes
	car obj;
	return 0;
}
//multiple inheritence
#include<iostream>
using namespace std;
class landvehicle{
	public:
		landvehicle(){
			cout<<"This is a landvehicle"<<endl;
		}
};
class watervehicle{
	public:
		watervehicle(){
			cout<<"this is a watervehicle"<<endl;
		}
};
//sub class derived from two base classes
class amphibiousvehicle:public watervehicle,public landvehicle{
	public:
		amphibiousvehicle(){
			cout<<"this is an amphibious vehicle"<<endl;
		}
};
int main()
{
	//creating pbject of sub class will
	//invoke the constructor of base classes.
	amphibiousvehicle obj;
	return 0;
}
