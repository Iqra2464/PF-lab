
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Class to represent each student
class Student {
public:
    int id;
    string name;
    int age;
    
    // Constructor to initialize student details
    Student(int id, string name, int age) {
        this->id = id;
        this->name = name;
        this->age = age;
    }
};

// Class to manage the student system
class StudentManagementSystem {
private:
    vector<Student> students;  // Vector to store student records

public:
    // Function to add a new student
    void addStudent(int id, string name, int age) {
        // Creating a new student object and adding it to the vector
        Student newStudent(id, name, age);
        students.push_back(newStudent);
        cout << "Student added successfully.\n";
    }

    // Function to display all students
    void displayStudents() {
        if (students.empty()) {
            cout << "No students available.\n";
            return;
        }

        cout << "List of all students:\n";
        for (const Student& student : students) {
            cout << "ID: " << student.id << ", Name: " << student.name << ", Age: " << student.age << endl;
        }
    }

    // Function to search for a student by ID
    void searchStudentById(int id) {
        bool found = false;
        for (const Student& student : students) {
            if (student.id == id) {
                cout << "Student found: ID: " << student.id << ", Name: " << student.name << ", Age: " << student.age << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with ID " << id << " not found.\n";
        }
    }

    // Function to update student information
    void updateStudent(int id, string newName, int newAge) {
        bool found = false;
        for (Student& student : students) {
            if (student.id == id) {
                student.name = newName;
                student.age = newAge;
                cout << "Student information updated.\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with ID " << id << " not found.\n";
        }
    }

    // Function to delete a student by ID
    void deleteStudent(int id) {
        bool found = false;
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->id == id) {
                students.erase(it);  // Remove student from the vector
                cout << "Student with ID " << id << " deleted.\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with ID " << id << " not found.\n";
        }
    }
};

// Main function to drive the system
int main() {
    StudentManagementSystem sms;
    int choice, id, age;
    string name;

    while (true) {
        // Display menu options to the user
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Update Student Information\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:  // Add a new student
                cout << "Enter student ID: ";
                cin >> id;
                cout << "Enter student name: ";
                cin.ignore();  // to ignore leftover newline
                getline(cin, name);
                cout << "Enter student age: ";
                cin >> age;
                sms.addStudent(id, name, age);
                break;

            case 2:  // Display all students
                sms.displayStudents();
                break;

            case 3:  // Search for a student by ID
                cout << "Enter student ID to search: ";
                cin >> id;
                sms.searchStudentById(id);
                break;

            case 4:  // Update student information
                cout << "Enter student ID to update: ";
                cin >> id;
                cout << "Enter new name: ";
                cin.ignore();  // to ignore leftover newline
                getline(cin, name);
                cout << "Enter new age: ";
                cin >> age;
                sms.updateStudent(id, name, age);
                break;

            case 5:  // Delete a student
                cout << "Enter student ID to delete: ";
                cin >> id;
                sms.deleteStudent(id);
                break;

            case 6:  // Exit the program
                cout << "Exiting the system.\n";
                return 0;

            default:
                cout << "Invalid choice, please try again.\n";
        }
    }

    return 0;
}








