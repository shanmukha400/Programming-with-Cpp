#include <iostream>
#include <map>
using namespace std;
int main() {
 map<int, string> m;
 m.insert({1, "Geeks"});
 m.insert({2, "For"});
 m.insert({3, "Geeks"});
 cout << "Map after insertion:" << endl;
 for (auto i : m)
cout << "\nAccessing elements:" << endl;
 cout << "m[1] = " << m[1] << endl;
 cout << "m.at(2) = " << m.at(2) << endl;
 cout << "\nEnter key to search: ";
 int key;
 cin >> key;
 auto it = m.find(key);
 if (it != m.end())
 cout << "Key found -> " << it->first << " : " << it->second << endl;
 else cout << "Key not found!" << endl;
 cout << "\nDeleting key 2 and first element..." << endl;
 m.erase(2);
 m.erase(m.begin());
 cout << "Map after deletion:" << endl;
 for (auto i : m)
 cout << i.first << " " << i.second << endl;
}
