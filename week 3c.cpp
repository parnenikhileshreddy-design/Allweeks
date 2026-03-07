#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;

    students[101] = "suresh";
    students[102] = "manish";
    students[103] = "Nikhil";

    cout << "Student Details:\n";
    for(map<int, string>::iterator it = students.begin(); it != students.end(); it++) {
        cout << "ID: " << it->first << " Name: " << it->second << endl;
    }

    return 0;
