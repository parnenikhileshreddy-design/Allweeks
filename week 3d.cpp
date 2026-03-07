#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set<int> s;

    s.insert(43);
    s.insert(22);
    s.insert(43);
    s.insert(32);   

    cout << "Set elements (sorted & unique): ";
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    int key = 22;
    if(s.find(key) != s.end())
        cout << "\nElement " << key << " found";
    else
        cout << "\nElement not found";

    return 0;
}