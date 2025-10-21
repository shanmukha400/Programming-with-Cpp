#include <iostream>
using namespace std;

class Demo {
private:
    int privateVar;    // Private member (accessible only inside the class)

public:
    int publicVar;     // Public member (accessible from outside the class)

    // Function to set values
    void setValues(int priv, int pub) {
        privateVar = priv;
        publicVar = pub;
    }

    // Function to display private variable
    void showPrivate() {
        cout << "Private Variable = " << privateVar << endl;
    }
};

int main() {
    Demo obj;

    // Accessing public member directly
    obj.publicVar = 50;
    cout << "Public Variable (Direct Access): " << obj.publicVar << endl;

    // Accessing private member directly (Not allowed)
    // obj.privateVar = 100;   // ❌ Error: 'privateVar' is private within this context

    // Accessing private member using public function
    obj.setValues(100, 50);
    cout << "\nAccessing private variable using public function:\n";
    obj.showPrivate();   // ✅ Accessed through a public member function

    return 0;
}
