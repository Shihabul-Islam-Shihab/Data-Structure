// pointer to structure
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};
int main() {

    Student s;
    // Initialize structure members using dot (.) operator
  s.name = "John";
    s.rollNumber = 101;
    s.marks = 95.5;
    Student* ptr = &s;
    // Access structure members using the pointer and arrow (->) operator
    cout << "Student Name: " << ptr->name << endl;
    cout << "Roll Number: " << ptr->rollNumber << endl;
    cout << "Marks: " << ptr->marks << endl;
    return 0;
}

