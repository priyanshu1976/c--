#include <iostream>
#include <string>
using namespace std;

// Base class Person (with virtual inheritance to prevent diamond problem)
class Person {
protected:
    string name;

public:
    // Constructor to initialize name
    Person(string n) : name(n) {}

    // Pure virtual function (must be overridden by derived classes)
    virtual string getRole() const = 0;  // Ensures derived classes provide their specific role

    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~Person() {}
};

// Class Employee inherits from Person
class Employee : virtual public Person {
protected:
    double salary;

public:
    // Constructor to initialize name and salary
    Employee(string n, double s) : Person(n), salary(s) {}

    // Override the getRole function
    virtual string getRole() const override {
        return "Employee";
    }

    // Function to display employee details
    void showDetails() const {
        cout << "Name: " << name << ", Role: " << getRole() << ", Salary: $" << salary << endl;
    }
};

// Class Student inherits from Person
class Student : virtual public Person {
protected:
    double grade;

public:
    // Constructor to initialize name and grade
    Student(string n, double g) : Person(n), grade(g) {}

    // Override the getRole function
    virtual string getRole() const override {
        return "Student";
    }

    // Function to display student details
    void showDetails() const {
        cout << "Name: " << name << ", Role: " << getRole() << ", Grade: " << grade << endl;
    }
};

// Class WorkingStudent inherits from both Employee and Student
// Demonstrates multiple inheritance
class WorkingStudent : public Employee, public Student {
public:
    // Constructor to initialize name, salary, and grade
    WorkingStudent(string n, double s, double g)
        : Person(n), Employee(n, s), Student(n, g) {}

    // Override the getRole function to give priority to working student
    virtual string getRole() const override {
        return "Working Student";
    }

    // Function to display working student details
    void showDetails() const {
        cout << "Name: " << name << ", Role: " << getRole()
             << ", Salary: $" << salary << ", Grade: " << grade << endl;
    }
};

int main() {
    // Creating an employee object
    Employee emp("John Doe", 50000);
    emp.showDetails();

    // Creating a student object
    Student stu("Alice Smith", 88.5);
    stu.showDetails();

    // Creating a working student object
    WorkingStudent ws("Emma Brown", 30000, 90.0);
    ws.showDetails();

    return 0;
}
