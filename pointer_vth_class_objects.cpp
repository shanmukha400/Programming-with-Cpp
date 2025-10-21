#include <iostream>
using namespace std;

// Class definition
class Student {
private:
    int id;
    string name;
    float marks;

public:
    // Member function to set data
    void setData(int i, string n, float m) {
        id = i;
        name = n;
        marks = m;
    }

    // Member function to display data
    void displayData() {
        cout << "Student ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // Function to increase marks
    void increaseMarks(float percent) {
        marks += (marks * percent / 100);
    }
};

int main() {
    // Create object
    Student s1;

    // Pointer to object
    Student *ptr;

    // Assign address of object to pointer
    ptr = &s1;

    // Use pointer to call member functions
    ptr->setData(101, "Ravi", 78.5);
    cout << "\n--- Student Details Before Increment ---\n";
    ptr->displayData();

    // Manipulate data using pointer
    ptr->increaseMarks(10); // Increase marks by 10%

    cout << "\n--- Student Details After Increment ---\n";
    ptr->displayData();

    return 0;
}
