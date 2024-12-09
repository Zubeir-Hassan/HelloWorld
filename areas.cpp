#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double areaOfCircle(double radius) {
    return 3.14159 * radius * radius; 
}

// Function to calculate the area of a rectangle
double areaOfRectangle(double length, double width) {
    return length * width; // length * width
}

// Function to calculate the area of a triangle
double areaOfTriangle(double base, double height) {
    return 0.5 * base * height; // 0.5 * base * height
}

int main() {
    int choice;
   
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Calculate the area of a circle\n";
        cout << "2. Calculate the area of a rectangle\n";
        cout << "3. Calculate the area of a triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Variables for calculations
        double radius, length, width, base, height;

        // Process user choice
        switch (choice) {
            case 1:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << "Area of the circle: " << areaOfCircle(radius) << endl;
                break;
            case 2:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << areaOfRectangle(length, width) << endl;
                break;
            case 3:
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << areaOfTriangle(base, height) << endl;
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    return 0;
}