//Multilevel inheritance 
#include<iostream>
using namespace std;
class vehicle{
public:
vehicle(){
cout<< "This is a vehicle"<<endl;
}
};
class fourwheeler:public vehicle{
public:
fourwheeler(){
cout<< "4 wheeler vehicles"<<endl;
}
};
class car: public fourwheeler{
public:
car(){
cout<< "This 4 wheeler vehicle is a car";
}
};
int main(){
car obj;
return 0;
}
//Hierarchical inheritance 
#include<iostream>
using namespace std;
class vehicle{
public:
vehicle(){
cout<< "This is a vehicle"<<endl;
}
};
class car : public vehicle {
public:
car(){
cout<< "This is car"<<endl;
}
};
class bus: public vehicle {
public:
bus(){
cout<< "This vehicle is bus"<<endl;
}
};
int main() {
car obj1;
bus obj2;
return 0;
}
