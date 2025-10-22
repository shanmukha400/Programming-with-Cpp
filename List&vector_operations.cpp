#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main() {
 cout << "=== VECTOR OPERATIONS ===" << endl;
vector<char> v = {'a', 'f', 'd'};
 v.push_back('z'); 
 v.insert(v.begin() + 1, 'c'); 
 cout << "After insertion: ";
 for (int i = 0; i < v.size(); i++)
 cout << v[i] << " ";
 cout << endl;
 v.pop_back(); 
 v.erase(find(v.begin(), v.end(), 'f')); 
 cout << "After deletion: ";
 for (int i = 0; i < v.size(); i++)
 cout << v[i] << " ";
 cout << endl; 
 cout << "Traversing vector: ";
 for (int i = 0; i < v.size(); i++)
 cout << v[i] << " ";
 cout << endl << endl;
 cout << "=== LIST OPERATIONS ===" << endl;
 list<int> l = {3, 2}; 
 l.push_back(5); 
 l.push_front(1); 
 auto it = l.begin();
 advance(it, 2);
 l.insert(it, 4); 
 cout << "After insertion: ";
 for (auto i : l)
 cout << i << " ";
 cout << endl;
 cout << "Traversing list: ";
 for (auto it = l.begin(); it != l.end(); ++it)
cout << *it << " ";
 cout << endl;
 l.pop_back(); 
 l.pop_front(); 
 it = l.begin();
 advance(it, 2); 
 if (it != l.end())
 l.erase(it);
 cout << "After deletion: ";
 for (auto i : l)
 cout << i << " ";
 cout << endl;
 return 0;
}

