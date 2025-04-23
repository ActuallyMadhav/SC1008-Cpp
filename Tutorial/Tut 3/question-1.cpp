#include <iostream>
#include <string>

class Student {
private: // TODO: define the private members here
    std::string studentName;
    int studentAge;
    double studentGPA;

public:
    // Constructor
    Student(std::string studentName, int studentAge, double studentGPA) {
        // TODO: Define the constructor
        this->studentName = studentName;
        this->studentAge = studentAge;
        this->studentGPA = studentGPA;
    }
    void displayDetails() const {
        std::cout << "Student Name: " << studentName << '\n';
        std::cout << "Age: " << studentAge << '\n';
        std::cout << "GPA: " << studentGPA << '\n';
    }

    // Getters
    // TODO: Implement the getters here
    std::string getName() const{
        return studentName;
    }

    int getAge() const{
        return studentAge;
    }

    double getGPA() const{
        return studentGPA;
    }

    // Setters
    // TODO: Implement the setters here
    void setName(std::string newName){
        studentName = newName;
    }

    void setAge(int newAge){
        studentAge = newAge;
    }

    void setGPA(double newGPA){
        studentGPA = newGPA;
    }
};

int main() {
    // Creating Student objects
    Student student1("Alice", 20, 3.8);
    Student student2("Charlie", 19, 3.5);

    // Display details of students
    std::cout << "Initial Student Details:\n";
    student1.displayDetails();
    std::cout << std::endl;
    student2.displayDetails();
    std::cout << std::endl;

    // Modify student1 details using setters
    student1.setName("Bob");
    student1.setAge(22);
    student1.setGPA(3.9);

    // Display updated details
    std::cout << "Updated Student Details:\n";
    student1.displayDetails();

    return 0;
}
