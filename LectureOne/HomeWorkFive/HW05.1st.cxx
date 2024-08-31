#include <iostream>
#include <string>

using namespace std;

struct Student {
    int ID;
    string Name;
    int Age;
    Student* ptr;
};

int main() {
    Student student1 = {1001, "Alice Brown", 20};
    Student student2 = {1002, "Charlie Davis", 21};
    Student student3 = {1003, "Eve Johnson", 19};

    student1.ptr = &student2;
    student2.ptr = &student3;
    student3.ptr = nullptr;

    Student* current = &student1;
    int studentNum = 1;

    while (current != nullptr) {
        cout << "Student: " << studentNum << endl;
        cout << "ID: " << current->ID << endl;
        cout << "Name: " << current->Name << endl;
        cout << "Age: " << current->Age << endl << endl;

        current = current->ptr;
        studentNum++;
    }

    return 0;
}
