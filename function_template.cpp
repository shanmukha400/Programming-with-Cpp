#include<iostream>
using namespace std;
template <typename T>
 getmax(T a, T b){
	return(a>b)?a:b;
}
template <typename T>
void myswap(T &x, T &y){
	T temp =x;
	x=y;
	y=temp;
}
int main(){
	int a=10, b=20;
	cout<< "Max of "<< a << " and " << b << " is " << getmax(a,b)<<endl;
	cout<< "Before swap: a = " << a << ", b = " << b << endl;
	myswap(a, b);
	cout<< "After swap: a = " << a << ", b = " << b << endl;
	cout<< "-----------------" <<endl;
	// working with double
	double x= 5.5,y=2.3;
	cout<< "Max of "<< x << " and " << y << " is " << getmax(a,b)<<endl;
	cout<< "Before swap: x = " << x << ", y = " << y << endl;
	myswap(x, y);
	cout<< "After swap: x = " << x << ", y = " << y << endl;
	cout<< "-----------------" <<endl;
	char c1='A',c2='Z';
	cout<<"Max of"<<c1<<"and"<<c2<<"is:"<<getmax(c1,c2)<<endl;
	cout<<"Before swap: c1="<<c1<<", c2="<<c2<<endl;
	myswap(c1,c2);
	cout<<"After swap:c1="<<c1<<", c2="<<c2<<endl;
	return 0;
}
