#include <iostream>

using namespace std;


struct Student {
    string name;
    int id;
};

void swapStudents(Student& a, Student& b) {
    Student temp = a;
    a = b;
    b = temp;
}

void sortStudentsById(Student students[], int numStudents) {
    for (int i = 0; i < numStudents - 1; ++i) {
        for (int j = 0; j < numStudents - i - 1; ++j) {
            if (students[j].id > students[j + 1].id) {
                swapStudents(students[j], students[j + 1]);
            }
        }
    }
}

int main() {

    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for Student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "ID: ";
        cin >> students[i].id;
    }

    
    sortStudentsById(students, numStudents);

    cout << "\nSorted Students based on ID:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Name: " << students[i].name << ", ID: " << students[i].id << "\n";
    }

    delete[] students;
    return 0;
}
