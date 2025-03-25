#include <iostream>
using namespace std;

union Result {
    int mark;
    char grade; // Can be only 'A', 'B' or 'C'
};

struct Student {
    char studentName[50];
    bool isGrade;
    int finalMark; // Used to store the final mark
    Result res;

    void convertGrade() { // A=90 , B=80, C=60
        // TO-DO: Write your functions here
        if(isGrade){
            switch(res.grade){
                case 'A':
                    finalMark = 90;
                    break;
                case 'B':
                    finalMark = 80;
                    break;
                case 'C':
                    finalMark = 60;
                    break;
                default:
                    finalMark = 0;
            }
        }

        else{
            finalMark = res.mark;
        }
    }
};

void displayStudentInfo(Student *students, int count) {
    // TO-DO: Write your functions here
    int total = 0;
    double average;

    cout << "\nStudent Results:\n";
    for(int i = 0; i < count; i++){
        cout << "Name: " << students[i].studentName << ", Final Mark: " << students[i].finalMark << '\n';
        total += students[i].finalMark;
    }

    if (count > 0){
        average = double(total) / count;
    }
    else{
        average = 0;
    }
    cout << "Average Final Mark: " << average << '\n';

}

int main() {
    // TO-DO: Write your functions here
    int size;
    cout << "How many students do you want to input?\nEnter student size: ";
    cin >> size;
    cin.ignore(); // removes new line buffer
    Student *students = new Student[size];
    
    for(int i = 0; i < size; i++){
        cout << "\nEnter student name: ";
        cin >> ws;
        cin.getline(students[i].studentName, 50); // reads full name

        char choice;
        cout << "Enter 'G' if result is grade or 'M' if result is mark: ";
        cin >> choice;
        cin.ignore();

        students[i].isGrade = (choice == 'G' || choice == 'g');

        if(students[i].isGrade){
            cout << "Enter grade (A, B, C): ";
            cin >> students[i].res.grade;
            cin.ignore();
        }
        else{
            cout << "Enter mark (0-100): ";
            cin >> students[i].res.mark;
            cin.ignore();
        }

        students[i].convertGrade(); // convert from grade to mark
    }

    displayStudentInfo(students, size); // display student info

    delete[] students; // free allocated memory

    return 0;
}

