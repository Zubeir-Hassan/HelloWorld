#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    string course;
    int score;

    // Input full name and course
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);
    
    cout << "Enter the course: ";
    getline(cin, course);
    
    // Input score
    cout << "Enter the score: ";
    cin >> score;

    // Determine grade based on score using switch-case
    char grade;
    
    // Using integer division to categorize the score
    int category;
    
    if (score >= 70) {
        category = 1; // A
    } else if (score >= 60) {
        category = 2; // B
    } else if (score >= 50) {
        category = 3; // C
    } else if (score >= 40) {
        category = 4; // D
    } else if (score < 40 && score >= 0) {
        category = 5; // F
    } else {
        cout << "Invalid score entered." << endl;
        return 1; // Exit with error code
    }

    switch (category) {
        case 1:
            grade = 'A';
            break;
        case 2:
            grade = 'B';
            break;
        case 3:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        case 5:
            grade = 'F';
            break;
        default:
            cout << "Invalid category." << endl;
            return 1; // Exit with error code
    }

    // Output the result
    cout << "\nStudent Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}